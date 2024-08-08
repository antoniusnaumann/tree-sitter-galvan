const _space = $ => token(seq(/[ \t]/, repeat(/[ \t]*/)));
const _newline = $ => token(seq(optional('\r'), '\n'));

module.exports = { _space, _newline };
