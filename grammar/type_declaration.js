const { separatedTrailing, separatedTrailing1 } = require("../helpers");

const type_declaration = {
  type_declaration: $ => choice(
    $.struct,
    $.alias,
    $.enum,
    $.tuple_struct,
    $.empty_struct,
  ),

  _type_prelude: $ => seq(
    optional($.visibility),
    $.type_keyword,
    $.type_ident,
  ),

  struct: $ => seq(
    $._type_prelude,
    $.brace_open,
    separatedTrailing($,
      $.struct_field,
      // repeat1(choice(',', $._newline))),
      choice($._comma, $._autosemi)),
    $.brace_close,
  ),

  struct_field: $ => seq(
    optional($.visibility),
    optional($.declaration_modifier),
    $.ident,
    $.colon,
    $.type_item,
  ),

  alias: $ => seq(
    $._type_prelude,
    $.assign,
    $.type_item
  ),

  enum: $ => seq(
    $._type_prelude,
    $.brace_open,
    separatedTrailing1($, $.type_ident, choice($._comma, $._autosemi)),
    $.brace_close,
  ),

  tuple_struct: $ => seq(
    $._type_prelude,
    $.paren_open,
    separatedTrailing($,
      $.tuple_field,
      // repeat1(choice(',', $._newline))),
      choice($._comma, $._autosemi)),

    $.paren_close,
  ),

  tuple_field: $ => seq(
    optional($.visibility),
    $.type_item,
  ),

  empty_struct: $ => seq(
    $._type_prelude,
  ),
};

module.exports = { type_declaration };
