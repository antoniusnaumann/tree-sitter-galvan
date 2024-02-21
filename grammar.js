import { type_item } from './grammar/type_item.js';
import { symbols } from './grammar/symbols.js';
import { keywords } from './grammar/keywords.js';
import { _comment, _space, _newline } from './grammar/space.js';

module.exports = grammar({
  name: 'Galvan',

  rules: {
    ...symbols,
    ...keywords,
    ...type_item,

    extras: $ => [
      _comment,
      /[ \t]+/
    ],
    source_file: $ => seq(
      optional(repeat($._newline)),
      repeat(seq(
        optional(repeat($._newline)),
        $._toplevel,
        optional(repeat($._newline))
      )),
    ),

    body: $ => seq(
      $.brace_open,
      repeat(seq(
        $.statement, 
        repeat1(choice($._newline, $._semicolon)))
      ),
      optional($.statement),
      $.brace_close,
    ),

    _toplevel: $ => choice(
      $.main,
      $.build,
      $.test,
      $.function,
      $.type_decl,
      $.entry_point
    ),

    main: $ => seq(
      $.main_keyword,
      $.brace_open,
      $.body,
      $.brace_close
    ),

    function: $ => seq(
      repeat($.annotation),
      $.fn_signature,
      $.brace_open,
      $.body,
      $.brace_close
    ),

    fn_signature: $ => seq(
      optional($.fn_modifiers),
      $.fn_keyword,
      $.ident,
      $.param_list,
      optional($.return_type)
    ),

    return_type: $ => seq(
      $.single_arrow,
      $.type_item
    ),
  }
});
