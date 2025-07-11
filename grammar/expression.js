const { separatedTrailing, separatedTrailing1 } = require("../helpers");
const { expression_precedence } = require("../precedence");

const expression = {
  expression: $ => choice(
    $.else_expression,
    $.trailing_closure_expression,
    $._infix_expression,
    $.postfix_expression,
    $.collection_literal,
    $.function_call,
    $.constructor_call,
    $.literal,
    $.ident,
    $.closure,
    $.group,
    // for now, we only allow return and throw expression on statement level
    // $.return_expression,
    // $.throw_expression,
  ),

  else_expression: $ => seq(
    field('receiver', $.expression),
    $.else_keyword,
    field('body', $.body),
  ),

  trailing_closure_expression: $ => prec.left(expression_precedence.trailing_closure, seq(
    $.ident,
    optional(field('arguments', $._trailing_argument_list)),
    optional(seq(
      $.pipe,
      separatedTrailing1($, $.closure_argument, $._comma),
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
    $.set_literal,
    $.ordered_dict_literal,
    $.dict_literal,
    // tuple_literal
  ),

  array_literal: $ => seq(
    $.bracket_open,
    separatedTrailing($, $.expression, $._comma),
    $.bracket_close,
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

  function_call: $ => seq(
    $.ident,
    $.paren_open,
    separatedTrailing($, $.function_call_arg, $._comma),
    $.paren_close,
  ),

  function_call_arg: $ => seq(
    optional($.declaration_modifier),
    $.expression,
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
    field('value', $.expression),
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
    $.expression,
    $.paren_close,
  )),

  return_expression: $ => seq(
    $.return_keyword,
    $.expression,
  ),

  throw_expression: $ => seq(
    $.throw_keyword,
    $.expression,
  )
};

module.exports = { expression };
