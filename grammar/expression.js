const { separatedTrailing, separatedTrailing1 } = require("../helpers");
const { expression_precedence } = require("../precedence");

const expression = {
  expression: $ => choice(
    $.match_expression,
    $.else_expression,
    $.trailing_closure_expression,
    $._infix_expression,
    $.postfix_expression,
    $.collection_literal,
    $.associated_function_call,
    $.associated_constant,
    $.function_call,
    $.constructor_call,
    $.enum_constructor,
    $.enum_access,
    $.literal,
    $.ident,
    $.closure,
    $.group,
  ),

  match_expression: $ => seq(
    $.match_keyword,
    field('scrutinee', $.expression),
    $.brace_open,
    repeat1($.match_arm),
    $.brace_close,
  ),

  match_arm: $ => seq(
    field('pattern', $.match_pattern),
    field('body', $.body),
  ),

  match_pattern: $ => choice(
    $.wildcard_match_pattern,
    $.enum_match_pattern,
  ),

  wildcard_match_pattern: $ => "_",

  enum_match_pattern: $ => seq(
    field('case', $.type_ident),
    optional($.match_pattern_args),
  ),

  match_pattern_args: $ => seq(
    $.paren_open,
    separatedTrailing($, $.match_pattern_arg, $._comma),
    $.paren_close,
  ),

  match_pattern_arg: $ => choice(
    $.named_match_pattern_arg,
    $.binding_match_pattern,
  ),

  named_match_pattern_arg: $ => seq(
    field('field', $.ident),
    $.colon,
    field('binding', $.binding_match_pattern),
  ),

  binding_match_pattern: $ => choice(
    $.ident,
    $.wildcard_match_pattern,
  ),

  else_expression: $ => prec.right(expression_precedence.else, seq(
    field('receiver', $.expression),
    $.else_keyword,
    optional(seq(
      $.pipe,
      separatedTrailing1($, $.closure_argument, $._comma),
      $.pipe,
    )),
    field('body', choice($.body, $.expression)),
  )),

  trailing_closure_expression: $ => prec.left(expression_precedence.trailing_closure, seq(
    $.ident,
    optional(field('arguments', $._trailing_argument_list)),
    optional(seq(
      alias($._named_closure_pipe, $.pipe),
      separatedTrailing($, $.closure_argument, $._comma),
      $.pipe,
    )),
    $.body,
  )),

  _trailing_argument_list: $ => seq(
    repeat(seq($.function_call_arg, $._comma)),
    $.function_call_arg,
  ),

  postfix_expression: $ => prec(expression_precedence.postfix, seq(
    $.expression,
    $.postfix_operator,
  )),

  postfix_operator: $ => choice(
    $.yeet_operator,
    $.access_operator,
  ),

  yeet_operator: $ => "!",
  access_operator: $ => seq(
    $.bracket_open,
    field('key', $.expression),
    $.bracket_close,
  ),

  collection_literal: $ => choice(
    $.array_literal,
    $.tuple_literal,
    $.set_literal,
    $.ordered_dict_literal,
    $.dict_literal,
  ),

  array_literal: $ => seq(
    $.bracket_open,
    separatedTrailing($, $.expression, $._comma),
    $.bracket_close,
  ),

  tuple_literal: $ => seq(
    $.paren_open,
    $.expression,
    $._comma,
    separatedTrailing($, $.expression, $._comma),
    $.paren_close,
  ),

  set_literal: $ => seq(
    $.brace_open,
    separatedTrailing($, $.expression, $._comma),
    $.brace_close,
  ),

  ordered_dict_literal: $ => seq(
    $.bracket_open,
    choice(
      $.colon,
      separatedTrailing1($, $.dict_element, $._comma),
    ),
    $.bracket_close,
  ),

  dict_literal: $ => seq(
    $.brace_open,
    choice(
      $.colon,
      separatedTrailing1($, $.dict_element, $._comma),
    ),
    $.brace_close,
  ),

  dict_element: $ => seq(
    field('key', $.expression),
    $.colon,
    field('value', $.expression),
  ),

  function_call: $ => prec.dynamic(1, seq(
    optional(seq(
      field('namespace', $.ident),
      $.double_colon,
    )),
    field('name', $.ident),
    $.paren_open,
    separatedTrailing($, $.function_call_arg, $._comma),
    $.paren_close,
  )),

  function_call_arg: $ => choice(
    seq(
      field('label', $.ident),
      $.colon,
      optional($.declaration_modifier),
      field('value', $.expression),
    ),
    seq(
      optional($.declaration_modifier),
      field('value', $.expression),
    ),
  ),

  associated_function_call: $ => seq(
    field('receiver', $.type_ident),
    $.member_call_operator,
    field('call', $.function_call),
  ),

  associated_constant: $ => seq(
    field('receiver', $.type_ident),
    $.member_call_operator,
    field('name', $.type_ident),
  ),

  constructor_call: $ => seq(
    $.type_ident,
    $.paren_open,
    separatedTrailing($, $.constructor_call_arg, $._comma),
    $.paren_close,
  ),

  constructor_call_arg: $ => seq(
    field('field', $.ident),
    $.colon,
    optional($.declaration_modifier),
    field('value', $.expression),
  ),

  enum_constructor: $ => seq(
    $.enum_access,
    $.paren_open,
    separatedTrailing($, $.enum_constructor_arg, $._comma),
    $.paren_close,
  ),

  enum_constructor_arg: $ => choice(
    // Named argument: r: 100
    seq(
      field('field', $.ident),
      $.colon,
      field('value', $.expression),
    ),
    // Anonymous argument: 128
    seq(
      optional($.declaration_modifier),
      field('value', $.expression),
    ),
  ),

  enum_access: $ => seq(
    $.type_ident,
    $.double_colon,
    $.type_ident,
  ),

  closure: $ => prec(expression_precedence.closure, seq(
    $.pipe,
    separatedTrailing($, $.closure_argument, $._comma),
    $.pipe,
    field('body', choice($.expression, $.body)),
  )),

  closure_argument: $ => seq(
    $.ident,
    optional(seq($.colon, $.type_item)),
  ),

  group: $ => prec(expression_precedence.group, seq(
    $.paren_open,
    optional(field('modifier', choice($.ref_keyword, $.mut_keyword))),
    $.expression,
    $.paren_close,
  )),
};

module.exports = { expression };
