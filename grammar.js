const { separatedTrailing, separatedTrailing1 } = require('./helpers.js');

const { type_item } = require('./grammar/type_item.js');
const { type_declaration } = require('./grammar/type_declaration.js');
const { symbols } = require('./grammar/symbols.js');
const { keywords } = require('./grammar/keywords.js');
const { literals } = require('./grammar/literals.js');
const { expression } = require('./grammar/expression.js');
const { infix } = require('./grammar/infix.js');
const { _comment, _space, _newline } = require('./grammar/space.js');

// TODO: Allow symbols from other alphabets in idents
const _ident = $ => /[a-z][a-z0-9_]*/;
const _type_ident = $ => /[A-Z][A-Za-z0-9_]*/;

module.exports = grammar({
  name: 'galvan',
  extras: $ => [
    $.comment,
    $._newline,
    /\s+/
  ],

  word: $ => $._word,

  externals: $ => [
    $._autosemi,
    $._error,
    $._named_closure_pipe,
  ],

  conflicts: $ => [
    [$.tuple_literal, $.function_call_arg],
  ],

  rules: {
    source: $ => repeat($._toplevel),

    body: $ => prec(100, seq(
      $.brace_open,
      repeat(seq(
        $.statement,
        repeat1($._semi))
        // repeat1(choice($._newline, $._semicolon)))
      ),
      optional($.statement),
      $.brace_close,
    )),

    _toplevel: $ => choice(
      $.use_declaration,
      $.build,
      $.test,
      $.function,
      $.cmd,
      $.type_declaration,
    ),

    build: $ => seq(
      $.build_keyword,
      // TODO: Special body rules
      $.body,
    ),

    use_declaration: $ => seq(
      $.use_keyword,
      $.use_path,
    ),

    use_path: $ => choice(
      field('namespace', $.ident),
      prec.right(seq(
        repeat1(seq(field('namespace', $.ident), $.double_colon)),
        field('name', choice($.ident, $.type_ident)),
      )),
    ),

    test: $ => seq(
      $.test_keyword,
      optional($.string_literal),
      $.body,
    ),

    cmd: $ => seq(
      repeat($.annotation),
      $.cmd_signature,
      $.body,
    ),
    
    cmd_signature: $ => seq(
      $.cmd_keyword,
      $.ident,
      $.param_list,
    ),

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
      optional($.return_type),
      optional($.where_clause),
    ),

    _fn_modifiers: $ => choice(
      seq($.visibility, optional($.async_keyword)),
      $.async_keyword,
    ),

    param_list: $ => seq($.paren_open, separatedTrailing($, $.param, $._comma), $.paren_close),
    param: $ => seq(
      optional($.declaration_modifier),
      choice(
        seq(field('label', choice($.ident, $.bitwise_xor)), field('name', $.ident)),
        field('name', $.ident),
      ),
      $.colon,
      $.type_item,
    ),

    return_type: $ => seq(
      $.single_arrow,
      $.type_item
    ),

    where_clause: $ => seq(
      $.where_keyword,
      separatedTrailing1($, $.where_bound, $._comma)
    ),

    where_bound: $ => seq(
      separatedTrailing1($, $.generic_type, $._comma),
      $.colon,
      separatedTrailing1($, $.type_ident, "+"),
    ),

    annotation: $ => "TODO: Annotation",

    statement: $ => prec(99, choice(
      $.assignment,
      $.declaration,
      $.expression,
      $.free_function,
      $.break_statement,
      $.continue_statement,
      // $.block,
    )),

    assignment: $ => seq(
      $.expression,
      $._assignment_operator,
      $._value_expression,
    ),

    declaration: $ => seq(
      $.declaration_modifier,
      $.ident,
      optional(seq($.colon, $.type_item)),
      optional(seq($.assign, $._value_expression)),
    ),

    _value_expression: $ => seq(
      optional($.declaration_modifier),
      $.expression,
    ),

    free_function: $ => prec(-1, seq(
      $.ident,
      field("arguments", $._trailing_argument_list),
    )),

    break_statement: $ => $.break_keyword,

    continue_statement: $ => $.continue_keyword,

    ...expression,

    ...infix,
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
    _semi: $ => choice($._semicolon, $._autosemi),

    comment: $ => token(seq('//', /.*/)),

    // _word: $ => token(choice($.type_ident, $.ident)),

    _newline,
    _space,
  }
});
