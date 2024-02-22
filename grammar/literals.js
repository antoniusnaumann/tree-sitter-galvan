const literals = {
  literal: $ => choice(
    $.boolean_literal,
    $.string_literal,
    $.number_literal
  ),

  string_literal: $ => choice(
    seq('"', repeat(choice(/[^"]/, $.raw_string_literal)), '"'),
    $.raw_string_literal
  ),

  raw_string_literal: $ => /#"([^"#]|("#+[^"#]))*"#/,

  number_literal: $ => token(seq(
    optional(choice('-', '+')),
    choice(
      '0',
      seq(/[1-9]/, repeat(/\d/))
    ),
    optional(choice(
      seq('.', repeat1(/\d/), optional(seq('_', choice('f32', 'f64')))), // Directly integrating float_suffix
      seq('_', choice('u8', 'u16', 'u32', 'u64', 'u128', 'i8', 'i16', 'i32', 'i64', 'i128', 'isize', 'usize')) // Directly integrating integer_suffix
    ))
  )),

  boolean_literal: $ => choice(
    $.true_keyword,
    $.false_keyword
  ),

};

module.exports = { literals };
