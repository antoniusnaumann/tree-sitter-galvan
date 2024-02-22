function separatedTrailing($, rule, delim) {
  return optional(seq(
    rule,
    repeat(seq(delim, rule)),
    optional(delim)
  ));
}

function separatedTrailing1($, rule, delim) {
  return seq(
    rule,
    repeat(seq(delim, rule)),
    optional(delim)
  );
}

module.exports = { separatedTrailing, separatedTrailing1 };
