const { separatedTrailing, separatedTrailing1 } = require("../helpers");
const { expression_precedence } = require("../precedence");

const expression = {
  expression: $ => choice(
    $.else_expression,
    $.trailing_closure_expression,
    $.operator_expression,
    $.postfix_expression,
    $.member_expression,
    $.collection_literal,
    $.function_call,
    $.constructor_call,
    $.literal,
    $.ident,
    $.closure,
    $.group,
  ),

  else_expression: $ => seq(
    $.expression,
    $.else_keyword,
    $.body,
  ),

  trailing_closure_expression: $ => "TODO: trailing closure",

  operator_expression: $ => "TODO: operator expression",

  postfix_expression: $ => seq(
    $.expression,
    $.postfix_operator,
  ),

  postfix_operator: $ => choice(
    $.exclamation_mark, 
    $.access_operator,
  ),

  access_operator: $ => seq(
    $.bracket_open,
    $.expression,
    $.bracket_close,
  ),

  member_expression: $ => "TODO: member expression",

  collection_literal: $ => choice(
    $.array_literal,
    $.set_literal,
    $.ordered_dict_literal,
    $.dict_literal,
    // tuple_literal
  ),

  array_literal: $ => seq(
    $.bracket_open,
    separatedTrailing($, $.expression, $.comma),
    $.bracket_close,
  ),

  set_literal: $ => seq(
    $.brace_open,
    separatedTrailing($, $.expression, $.comma),
    $.brace_close,
  ),

  ordered_dict_literal: $ => seq(
    $.bracket_open,
    choice(
      $.colon,
      separatedTrailing1($, $.dict_element, $.comma), 
    ),
    $.bracket_close,
  ),

  dict_literal: $ => seq(
    $.brace_open,
    choice(
      $.colon,
      separatedTrailing1($, $.dict_element, $.comma), 
    ),
    $.brace_close,
  ),

  dict_element: $ => seq(
    $.expression,
    $.colon,
    $.expression,
  ),

  function_call: $ => seq(
    $.ident,
    $.paren_open,
    separatedTrailing($, $.function_call_arg, $.comma),
    $.paren_close,
  ),

  function_call_arg: $ => seq(
    optional($.declaration_modifier),
    $.expression,
  ),

  constructor_call: $ => seq(
    $.type_ident,
    $.paren_open,
    separatedTrailing($, $.constructor_call_arg, $.comma),
    $.paren_close,
  ),

  constructor_call_arg: $ => seq(
    $.ident,
    $.colon,
    $.expression,
  ),

  closure: $ => prec(expression_precedence.closure, seq(
    $.pipe,
    separatedTrailing($, $.closure_argument, $.comma),
    $.pipe,
    choice($.expression, $.body),
  )),

  closure_argument: $ => seq(
    $.ident,
    optional(seq($.colon, $.type_item)),
  ),

  group: $ => seq(
    $.paren_open,
    $.expression,
    $.paren_close,
  ),
};

module.exports = { expression };
