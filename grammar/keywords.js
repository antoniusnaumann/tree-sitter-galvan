const keywords = {
  main_keyword: $ => 'main',
  build_keyword: $ => 'build',
  test_keyword: $ => 'test',
  fn_keyword: $ => 'fn',
  type_keyword: $ => 'type',

  declaration_modifier: $ => choice($.ref_keyword, $.let_keyword, $.mut_keyword),
  ref_keyword: $ => 'ref',
  let_keyword: $ => 'let',
  mut_keyword: $ => 'mut',

  true_keyword: $ => 'true',
  false_keyword: $ => 'false',

  none_keyword: $ => 'none',

  visibility: $ => $.pub_keyword,
  async_keyword: $ => 'async',
  const_keyword: $ => 'const',
  pub_keyword: $ => 'pub',
  
  else_keyword: $ => 'else',
  break_keyword: $ => 'break',
  continue_keyword: $ => 'continue',

  where_keyword: $ => 'where',
};

module.exports = { keywords };
