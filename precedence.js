const expression_precedence = {
  closure: -2,
  trailing_closure: -1,
  infix: 2,
  postfix: 3,
  member: 4,
};

const infix_precedence = {
  member: 30,
  custom: 25,
  exponent: 20,
  multiply: 19,
  addition: 18,
  shift: 17,
  bitand: 16,
  bitxor: 15,
  bitor: 14,
  concat: 13,
  contains: 12,
  comparison: 11,
  and: 10,
  xor: 9,
  or: 8,
};

module.exports = { expression_precedence, infix_precedence };
