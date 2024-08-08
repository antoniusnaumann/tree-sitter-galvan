#include "tree_sitter/alloc.h"
#include "tree_sitter/array.h"
#include "tree_sitter/parser.h"
#include <ctype.h>
#include <stdio.h>

enum TokenType {
  AUTOSEMI,
};

void *tree_sitter_galvan_external_scanner_create(void) {
  // We don't need to maintain any state,
  // in this case the tree sitter documentation allows returning NULL
  return NULL;
}

void tree_sitter_galvan_external_scanner_destroy(void *payload) {}

unsigned tree_sitter_galvan_external_scanner_serialize(void *payload,
                                                       char *buffer) {
  return 0;
}

void tree_sitter_galvan_external_scanner_deserialize(void *payload,
                                                     const char *buffer,
                                                     unsigned length) {}

bool tree_sitter_galvan_external_scanner_scan(void *payload, TSLexer *lexer,
                                              const bool *valid_symbols) {
  if (!valid_symbols[AUTOSEMI]) {
    return false;
  }

  if (lexer->eof(lexer)) {
    return false;
  }

  if (lexer->lookahead != '\n' && lexer->lookahead != '\r') {
    return false;
  }

  lexer->advance(lexer, false);
  lexer->mark_end(lexer);

  while (isspace(lexer->lookahead)) {
    lexer->advance(lexer, true);
    if (lexer->eof(lexer)) {
      return false;
    }
  }

  // TODO  Also consider last symbol before newline, e.g. ',' should not lead to
  // a newline... (but maybe this is covered by treesitter not expecting a
  // semicolon in this situation anyways
  // TODO  Accept other symbols that can start an identifier here
  if ((lexer->lookahead >= 'a' && lexer->lookahead <= 'z') ||
      (lexer->lookahead >= 'A' && lexer->lookahead <= 'Z') ||
      (lexer->lookahead == '_') || (lexer->lookahead == '[') ||
      (lexer->lookahead == '{') || (lexer->lookahead == '(') || (lexer->lookahead == '\'') || (lexer->lookahead == '"')) {

      lexer->result_symbol = AUTOSEMI;
      return true;
    }

  return false;
}
