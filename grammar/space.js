export const _space = $ => token(seq(/[ \t]/, repeat(/[ \t]*/)));
export const _newline = $ => /\r?\n/;
export const _comment = $ => token(seq('//', /[^\n]*/));
