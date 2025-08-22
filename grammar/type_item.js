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
    $.parametric_type,
    $.generic_type,
    $.basic_type,
  ),

  result_type: $ => prec.left(seq(
    field('success', $.type_item),
    $.exclamation_mark,
    field('error', optional($.type_item))
  )),

  optional_type: $ => seq(
    field('element', $.type_item),
    $.question_mark,
  ),

  set_type: $ => seq(
    $.brace_open,
    field('element', $.type_item),
    $.brace_close,
  ),

  array_type: $ => seq(
    $.bracket_open,
    field('element', $.type_item),
    $.bracket_close
  ),

  dict_type: $ => seq(
    $.brace_open,
    field('key', $.type_item),
    $.colon,
    field('value', $.type_item),
    $.brace_close
  ),

  ordered_dict_type: $ => seq(
    $.bracket_open,
    field('key', $.type_item),
    $.colon,
    field('value', $.type_item),
    $.bracket_close
  ),

  tuple_type: $ => seq(
    $.paren_open,
    separatedTrailing1($, $.type_item, $._comma),
    $.paren_close
  ),

  // Parametric types like Container<Int>, Vec<String>
  parametric_type: $ => seq(
    field('base_type', $.type_ident),
    $.angle_bracket_open,
    field('type_args', separatedTrailing1($, $.type_item, $._comma)),
    $.angle_bracket_close
  ),

  // Type parameters for generics are lower case in Galvan
  // This way, there is no need to declare them in angle brackets
  generic_type: $ => seq(
      $.ident
  ),

  basic_type: $ => seq(
    $.type_ident,
  ),
};

module.exports = { type_item };
