#include "tree_sitter/parser.h"
#include "tree_sitter/alloc.h"
#include "tree_sitter/array.h"

enum TokenType {
  AUTOSEMI,
};

void *tree_sitter_galvan_external_scanner_create(void) {
  // ...
}

void tree_sitter_galvan_external_scanner_destroy(void *payload) {
  // ...
}

unsigned tree_sitter_galvan_external_scanner_serialize(
  void *payload,
  char *buffer
) {
  // ...
}

void tree_sitter_galvan_external_scanner_deserialize(
  void *payload,
  const char *buffer,
  unsigned length
) {
  // ...
}

bool tree_sitter_galvan_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  // ...
}
