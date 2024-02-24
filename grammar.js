const { separatedTrailing, separatedTrailing1 } = require('./helpers.js');

const { type_item } = require('./grammar/type_item.js');
const { type_declaration } = require('./grammar/type_declaration.js');
const { symbols } = require('./grammar/symbols.js');
const { keywords } = require('./grammar/keywords.js');
const { literals } = require('./grammar/literals.js');
const { expression } = require('./grammar/expression.js');
const { _comment, _space, _newline } = require('./grammar/space.js');

// TODO: Allow symbols from other alphabets in idents
const _ident = $ => /[a-z][a-z0-9_]*/;
const _type_ident = $ => /[A-Z][A-Za-z0-9_]*/;

module.exports = grammar({
  name: 'Galvan',
  extras: $ => [
    $._comment,
    /\s+/
  ],

  word: $ => $._word,

  rules: {
    source: $ => repeat($._toplevel),

    body: $ => prec(10, seq(
      $.brace_open,
      repeat(seq(
        $.statement,
        repeat1(choice($._newline, $._semicolon)))
      ),
      optional($.statement),
      $.brace_close,
    )),

    _toplevel: $ => choice(
      $.main,
      $.build,
      $.test,
      $.function,
      $.type_declaration,
      $.entry_point
    ),

    main: $ => seq(
      $.main_keyword,
      $.body,
    ),

    build: $ => seq(
      $.build_keyword,
      // TODO: Special body rules
      $.body,
    ),

    test: $ => seq(
      $.test_keyword,
      optional($.string_literal),
      $.body,
    ),

    entry_point: $ => seq($.ident, $.body),

    function: $ => seq(
      repeat($.annotation),
      $.fn_signature,
      $.body,
    ),

    fn_signature: $ => seq(
      optional($._fn_modifiers),
      $.fn_keyword,
      $.ident,
      $.param_list,
      optional($.return_type)
    ),

    _fn_modifiers: $ => $.visibility,

    param_list: $ => seq($.paren_open, separatedTrailing($, $.param, $.comma), $.paren_close),
    param: $ => seq(
      optional($.declaration_modifier),
      $.ident,
      $.colon,
      $.type_item,
    ),

    return_type: $ => seq(
      $.single_arrow,
      $.type_item
    ),

    annotation: $ => "TODO: Annotation",

    statement: $ => prec(5, choice(
      $.assignment,
      $.declaration,
      $.expression,
      // $.block,
    )),
    
    assignment: $ => "TODO: Assignment",

    declaration: $ => "TODO: Declaration",

    ...expression,

    // block: $ => $.body,

    ...type_declaration,

    ...type_item,

    ...symbols,
    ...keywords,
    ...literals,

    _ident,
    _type_ident,

    _word: $ => /[A-Za-z0-9_]*/,
    ident: $ => $._ident,
    type_ident: $ => $._type_ident,

    // _word: $ => token(choice($.type_ident, $.ident)),

    _newline,
    _space,
    _comment,
  }
});
