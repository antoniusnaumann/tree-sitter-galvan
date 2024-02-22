const { separatedTrailing1 } = require("../helpers");

const type_item = {
  type_item: $ => choice(
    $.result_type,
    $.optional_type,
    $.array_type,
    $.dict_type,
    $.ordered_dict_type,
    $.set_type,
    $.tuple_type,
    $.basic_type,
  ),

  result_type: $ => prec.right(seq(
    $.type_item,
    $.exclamation_mark,
    optional($.type_item)
  )),

  optional_type: $ => seq(
    $.type_item,
    $.question_mark,
  ),

  set_type: $ => seq(
    $.brace_open,
    $.type_item,
    $.brace_close,
  ),

  array_type: $ => seq(
    $.bracket_open,
    $.type_item,
    $.bracket_close
  ),

  dict_type: $ => seq(
    $.brace_open,
    $.type_item,
    $.colon,
    $.type_item,
    $.brace_close
  ),

  ordered_dict_type: $ => seq(
    $.bracket_open,
    $.type_item,
    $.colon,
    $.type_item,
    $.bracket_close
  ),

  tuple_type: $ => seq(
    $.paren_open,
    separatedTrailing1($, $.type_item, $.comma),
    $.paren_close
  ),

  basic_type: $ => seq(
    $.type_ident,
  ),
};

module.exports = { type_item };
