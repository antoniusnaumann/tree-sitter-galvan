const literals = {
  literal: $ => choice(
    $.none_keyword,
    $.boolean_literal,
    $.string_literal,
    $.char_literal,
    $.number_literal
  ),

  string_literal: $ => choice(
    seq('"', repeat(choice(
      // Regular characters (not quote or backslash), as one immediate token
      // so extras (comments, whitespace) never lex inside string contents,
      // e.g. the `//` in "http://example.com".
      token.immediate(prec(1, /[^"\\]+/)),
      $.escape_sequence,
      $.string_interpolation
    )), token.immediate('"')),
    $.raw_string_literal
  ),

  raw_string_literal: $ => /#"([^"#]|("#+[^"#]))*"#/,

  char_literal: $ => seq(
    "'",
    choice(
      /[^'\\]/,           // Regular character
      $.escape_sequence
    ),
    "'"
  ),

  escape_sequence: $ => choice(
    seq("\\", /[nrt\\'"]/),      // Basic escape sequences: \n, \r, \t, \\, \', \"
    seq("\\", "u", "{", /[0-9a-fA-F]+/, "}") // Unicode escapes: \u{1F600}
  ),

  string_interpolation: $ => seq(
    "\\",
    $.paren_open,
    $.expression,
    $.paren_close
  ),

  number_literal: $ => token(seq(
    optional(choice('-', '+')),
    choice(
      '0',
      seq(/[1-9]/, repeat(/\d/))
    ),
    optional(choice(
      seq('.', repeat1(/\d/), 
        optional(seq(
          optional('_'), 
          choice('f32', 'f64')))), 
      seq(
        optional('_'), 
        choice('u8', 'u16', 'u32', 'u64', 'u128', 'i8', 'i16', 'i32', 'i64', 'i128', 'isize', 'usize')) 
    ))
  )),

  boolean_literal: $ => choice(
    $.true_keyword,
    $.false_keyword
  ),
};

module.exports = { literals };
