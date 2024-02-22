const { separatedTrailing } = require("../helpers");

const type_declaration = {
  type_declaration: $ => choice(
    $.struct_type,
    $.alias_type,
    // $.enum_type,
    $.tuple_type,
    $.empty_type,
  ),

  _type_prelude: $ => seq(
    optional($.visibility),
    $.type_keyword,
    $.type_ident,
  ),

  struct_type: $ => seq(
    $._type_prelude,
    $.brace_open,
    separatedTrailing($,
      $.struct_field,
      repeat1(choice(',', $._newline))),
    $.brace_close,
  ),

  struct_field: $ => seq(
    optional($.visibility),
    $.ident,
    $.colon,
    $.type_item,
  ),

  alias_type: $ => seq(
    $._type_prelude,
    $.assign,
    $.type_item
  ),

  tuple_type: $ => seq(
    $._type_prelude,
    $.paren_open,
    separatedTrailing($,
      $.tuple_field,
      repeat1(choice(',', $._newline))),
    $.paren_close,
  ),

  empty_type: $ => seq(
    $._type_prelude,
  ),
};

module.exports = { type_declaration };
