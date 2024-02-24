#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 185
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 116
#define ALIAS_COUNT 0
#define TOKEN_COUNT 69
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym__word = 1,
  sym_annotation = 2,
  sym_statement = 3,
  anon_sym_COMMA = 4,
  sym_colon = 5,
  sym__semicolon = 6,
  sym_dot = 7,
  sym_question_mark = 8,
  sym_exclamation_mark = 9,
  sym_paren_open = 10,
  sym_paren_close = 11,
  sym_bracket_open = 12,
  sym_bracket_close = 13,
  sym_brace_open = 14,
  sym_brace_close = 15,
  sym_single_arrow = 16,
  sym_double_arrow = 17,
  sym_plus = 18,
  sym_minus = 19,
  sym_multiply = 20,
  sym_divide = 21,
  sym_remainder = 22,
  sym_power = 23,
  sym_assign = 24,
  sym_add_assign = 25,
  sym_sub_assign = 26,
  sym_mul_assign = 27,
  sym_pow_assign = 28,
  sym_div_assign = 29,
  sym_rem_assign = 30,
  sym_equal = 31,
  sym_not_equal = 32,
  sym_greater = 33,
  sym_greater_equal = 34,
  sym_less = 35,
  sym_less_equal = 36,
  sym_identical = 37,
  sym_not_identical = 38,
  sym_and = 39,
  sym_or = 40,
  sym_xor = 41,
  sym_not = 42,
  sym_concat = 43,
  sym_remove = 44,
  sym_contains = 45,
  sym_main_keyword = 46,
  sym_build_keyword = 47,
  sym_test_keyword = 48,
  sym_fn_keyword = 49,
  sym_type_keyword = 50,
  sym_ref_keyword = 51,
  sym_let_keyword = 52,
  sym_mut_keyword = 53,
  sym_true_keyword = 54,
  sym_false_keyword = 55,
  sym_none_keyword = 56,
  sym_async_keyword = 57,
  sym_const_keyword = 58,
  sym_pub_keyword = 59,
  sym_else_keyword = 60,
  anon_sym_DQUOTE = 61,
  aux_sym_string_literal_token1 = 62,
  sym_raw_string_literal = 63,
  sym_number_literal = 64,
  sym__ident = 65,
  sym__type_ident = 66,
  sym__newline = 67,
  sym__comment = 68,
  sym_source = 69,
  sym_body = 70,
  sym__toplevel = 71,
  sym_main = 72,
  sym_build = 73,
  sym_test = 74,
  sym_entry_point = 75,
  sym_function = 76,
  sym_fn_signature = 77,
  sym__fn_modifiers = 78,
  sym_param_list = 79,
  sym_param = 80,
  sym_return_type = 81,
  sym_type_declaration = 82,
  sym__type_prelude = 83,
  sym_struct = 84,
  sym_struct_field = 85,
  sym_alias = 86,
  sym_tuple_struct = 87,
  sym_tuple_field = 88,
  sym_empty_struct = 89,
  sym_type_item = 90,
  sym_result_type = 91,
  sym_optional_type = 92,
  sym_set_type = 93,
  sym_array_type = 94,
  sym_dict_type = 95,
  sym_ordered_dict_type = 96,
  sym_tuple_type = 97,
  sym_generic_type = 98,
  sym_basic_type = 99,
  sym_comma = 100,
  sym_declaration_modifier = 101,
  sym_visibility = 102,
  sym_string_literal = 103,
  sym_ident = 104,
  sym_type_ident = 105,
  aux_sym_source_repeat1 = 106,
  aux_sym_body_repeat1 = 107,
  aux_sym_body_repeat2 = 108,
  aux_sym_function_repeat1 = 109,
  aux_sym_param_list_repeat1 = 110,
  aux_sym_struct_repeat1 = 111,
  aux_sym_struct_repeat2 = 112,
  aux_sym_tuple_struct_repeat1 = 113,
  aux_sym_tuple_type_repeat1 = 114,
  aux_sym_string_literal_repeat1 = 115,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__word] = "_word",
  [sym_annotation] = "annotation",
  [sym_statement] = "statement",
  [anon_sym_COMMA] = ",",
  [sym_colon] = "colon",
  [sym__semicolon] = "_semicolon",
  [sym_dot] = "dot",
  [sym_question_mark] = "question_mark",
  [sym_exclamation_mark] = "exclamation_mark",
  [sym_paren_open] = "paren_open",
  [sym_paren_close] = "paren_close",
  [sym_bracket_open] = "bracket_open",
  [sym_bracket_close] = "bracket_close",
  [sym_brace_open] = "brace_open",
  [sym_brace_close] = "brace_close",
  [sym_single_arrow] = "single_arrow",
  [sym_double_arrow] = "double_arrow",
  [sym_plus] = "plus",
  [sym_minus] = "minus",
  [sym_multiply] = "multiply",
  [sym_divide] = "divide",
  [sym_remainder] = "remainder",
  [sym_power] = "power",
  [sym_assign] = "assign",
  [sym_add_assign] = "add_assign",
  [sym_sub_assign] = "sub_assign",
  [sym_mul_assign] = "mul_assign",
  [sym_pow_assign] = "pow_assign",
  [sym_div_assign] = "div_assign",
  [sym_rem_assign] = "rem_assign",
  [sym_equal] = "equal",
  [sym_not_equal] = "not_equal",
  [sym_greater] = "greater",
  [sym_greater_equal] = "greater_equal",
  [sym_less] = "less",
  [sym_less_equal] = "less_equal",
  [sym_identical] = "identical",
  [sym_not_identical] = "not_identical",
  [sym_and] = "and",
  [sym_or] = "or",
  [sym_xor] = "xor",
  [sym_not] = "not",
  [sym_concat] = "concat",
  [sym_remove] = "remove",
  [sym_contains] = "contains",
  [sym_main_keyword] = "main_keyword",
  [sym_build_keyword] = "build_keyword",
  [sym_test_keyword] = "test_keyword",
  [sym_fn_keyword] = "fn_keyword",
  [sym_type_keyword] = "type_keyword",
  [sym_ref_keyword] = "ref_keyword",
  [sym_let_keyword] = "let_keyword",
  [sym_mut_keyword] = "mut_keyword",
  [sym_true_keyword] = "true_keyword",
  [sym_false_keyword] = "false_keyword",
  [sym_none_keyword] = "none_keyword",
  [sym_async_keyword] = "async_keyword",
  [sym_const_keyword] = "const_keyword",
  [sym_pub_keyword] = "pub_keyword",
  [sym_else_keyword] = "else_keyword",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [sym_raw_string_literal] = "raw_string_literal",
  [sym_number_literal] = "number_literal",
  [sym__ident] = "_ident",
  [sym__type_ident] = "_type_ident",
  [sym__newline] = "_newline",
  [sym__comment] = "_comment",
  [sym_source] = "source",
  [sym_body] = "body",
  [sym__toplevel] = "_toplevel",
  [sym_main] = "main",
  [sym_build] = "build",
  [sym_test] = "test",
  [sym_entry_point] = "entry_point",
  [sym_function] = "function",
  [sym_fn_signature] = "fn_signature",
  [sym__fn_modifiers] = "_fn_modifiers",
  [sym_param_list] = "param_list",
  [sym_param] = "param",
  [sym_return_type] = "return_type",
  [sym_type_declaration] = "type_declaration",
  [sym__type_prelude] = "_type_prelude",
  [sym_struct] = "struct",
  [sym_struct_field] = "struct_field",
  [sym_alias] = "alias",
  [sym_tuple_struct] = "tuple_struct",
  [sym_tuple_field] = "tuple_field",
  [sym_empty_struct] = "empty_struct",
  [sym_type_item] = "type_item",
  [sym_result_type] = "result_type",
  [sym_optional_type] = "optional_type",
  [sym_set_type] = "set_type",
  [sym_array_type] = "array_type",
  [sym_dict_type] = "dict_type",
  [sym_ordered_dict_type] = "ordered_dict_type",
  [sym_tuple_type] = "tuple_type",
  [sym_generic_type] = "generic_type",
  [sym_basic_type] = "basic_type",
  [sym_comma] = "comma",
  [sym_declaration_modifier] = "declaration_modifier",
  [sym_visibility] = "visibility",
  [sym_string_literal] = "string_literal",
  [sym_ident] = "ident",
  [sym_type_ident] = "type_ident",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_body_repeat2] = "body_repeat2",
  [aux_sym_function_repeat1] = "function_repeat1",
  [aux_sym_param_list_repeat1] = "param_list_repeat1",
  [aux_sym_struct_repeat1] = "struct_repeat1",
  [aux_sym_struct_repeat2] = "struct_repeat2",
  [aux_sym_tuple_struct_repeat1] = "tuple_struct_repeat1",
  [aux_sym_tuple_type_repeat1] = "tuple_type_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__word] = sym__word,
  [sym_annotation] = sym_annotation,
  [sym_statement] = sym_statement,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_colon] = sym_colon,
  [sym__semicolon] = sym__semicolon,
  [sym_dot] = sym_dot,
  [sym_question_mark] = sym_question_mark,
  [sym_exclamation_mark] = sym_exclamation_mark,
  [sym_paren_open] = sym_paren_open,
  [sym_paren_close] = sym_paren_close,
  [sym_bracket_open] = sym_bracket_open,
  [sym_bracket_close] = sym_bracket_close,
  [sym_brace_open] = sym_brace_open,
  [sym_brace_close] = sym_brace_close,
  [sym_single_arrow] = sym_single_arrow,
  [sym_double_arrow] = sym_double_arrow,
  [sym_plus] = sym_plus,
  [sym_minus] = sym_minus,
  [sym_multiply] = sym_multiply,
  [sym_divide] = sym_divide,
  [sym_remainder] = sym_remainder,
  [sym_power] = sym_power,
  [sym_assign] = sym_assign,
  [sym_add_assign] = sym_add_assign,
  [sym_sub_assign] = sym_sub_assign,
  [sym_mul_assign] = sym_mul_assign,
  [sym_pow_assign] = sym_pow_assign,
  [sym_div_assign] = sym_div_assign,
  [sym_rem_assign] = sym_rem_assign,
  [sym_equal] = sym_equal,
  [sym_not_equal] = sym_not_equal,
  [sym_greater] = sym_greater,
  [sym_greater_equal] = sym_greater_equal,
  [sym_less] = sym_less,
  [sym_less_equal] = sym_less_equal,
  [sym_identical] = sym_identical,
  [sym_not_identical] = sym_not_identical,
  [sym_and] = sym_and,
  [sym_or] = sym_or,
  [sym_xor] = sym_xor,
  [sym_not] = sym_not,
  [sym_concat] = sym_concat,
  [sym_remove] = sym_remove,
  [sym_contains] = sym_contains,
  [sym_main_keyword] = sym_main_keyword,
  [sym_build_keyword] = sym_build_keyword,
  [sym_test_keyword] = sym_test_keyword,
  [sym_fn_keyword] = sym_fn_keyword,
  [sym_type_keyword] = sym_type_keyword,
  [sym_ref_keyword] = sym_ref_keyword,
  [sym_let_keyword] = sym_let_keyword,
  [sym_mut_keyword] = sym_mut_keyword,
  [sym_true_keyword] = sym_true_keyword,
  [sym_false_keyword] = sym_false_keyword,
  [sym_none_keyword] = sym_none_keyword,
  [sym_async_keyword] = sym_async_keyword,
  [sym_const_keyword] = sym_const_keyword,
  [sym_pub_keyword] = sym_pub_keyword,
  [sym_else_keyword] = sym_else_keyword,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [sym_raw_string_literal] = sym_raw_string_literal,
  [sym_number_literal] = sym_number_literal,
  [sym__ident] = sym__ident,
  [sym__type_ident] = sym__type_ident,
  [sym__newline] = sym__newline,
  [sym__comment] = sym__comment,
  [sym_source] = sym_source,
  [sym_body] = sym_body,
  [sym__toplevel] = sym__toplevel,
  [sym_main] = sym_main,
  [sym_build] = sym_build,
  [sym_test] = sym_test,
  [sym_entry_point] = sym_entry_point,
  [sym_function] = sym_function,
  [sym_fn_signature] = sym_fn_signature,
  [sym__fn_modifiers] = sym__fn_modifiers,
  [sym_param_list] = sym_param_list,
  [sym_param] = sym_param,
  [sym_return_type] = sym_return_type,
  [sym_type_declaration] = sym_type_declaration,
  [sym__type_prelude] = sym__type_prelude,
  [sym_struct] = sym_struct,
  [sym_struct_field] = sym_struct_field,
  [sym_alias] = sym_alias,
  [sym_tuple_struct] = sym_tuple_struct,
  [sym_tuple_field] = sym_tuple_field,
  [sym_empty_struct] = sym_empty_struct,
  [sym_type_item] = sym_type_item,
  [sym_result_type] = sym_result_type,
  [sym_optional_type] = sym_optional_type,
  [sym_set_type] = sym_set_type,
  [sym_array_type] = sym_array_type,
  [sym_dict_type] = sym_dict_type,
  [sym_ordered_dict_type] = sym_ordered_dict_type,
  [sym_tuple_type] = sym_tuple_type,
  [sym_generic_type] = sym_generic_type,
  [sym_basic_type] = sym_basic_type,
  [sym_comma] = sym_comma,
  [sym_declaration_modifier] = sym_declaration_modifier,
  [sym_visibility] = sym_visibility,
  [sym_string_literal] = sym_string_literal,
  [sym_ident] = sym_ident,
  [sym_type_ident] = sym_type_ident,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_body_repeat2] = aux_sym_body_repeat2,
  [aux_sym_function_repeat1] = aux_sym_function_repeat1,
  [aux_sym_param_list_repeat1] = aux_sym_param_list_repeat1,
  [aux_sym_struct_repeat1] = aux_sym_struct_repeat1,
  [aux_sym_struct_repeat2] = aux_sym_struct_repeat2,
  [aux_sym_tuple_struct_repeat1] = aux_sym_tuple_struct_repeat1,
  [aux_sym_tuple_type_repeat1] = aux_sym_tuple_type_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_colon] = {
    .visible = true,
    .named = true,
  },
  [sym__semicolon] = {
    .visible = false,
    .named = true,
  },
  [sym_dot] = {
    .visible = true,
    .named = true,
  },
  [sym_question_mark] = {
    .visible = true,
    .named = true,
  },
  [sym_exclamation_mark] = {
    .visible = true,
    .named = true,
  },
  [sym_paren_open] = {
    .visible = true,
    .named = true,
  },
  [sym_paren_close] = {
    .visible = true,
    .named = true,
  },
  [sym_bracket_open] = {
    .visible = true,
    .named = true,
  },
  [sym_bracket_close] = {
    .visible = true,
    .named = true,
  },
  [sym_brace_open] = {
    .visible = true,
    .named = true,
  },
  [sym_brace_close] = {
    .visible = true,
    .named = true,
  },
  [sym_single_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_double_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_plus] = {
    .visible = true,
    .named = true,
  },
  [sym_minus] = {
    .visible = true,
    .named = true,
  },
  [sym_multiply] = {
    .visible = true,
    .named = true,
  },
  [sym_divide] = {
    .visible = true,
    .named = true,
  },
  [sym_remainder] = {
    .visible = true,
    .named = true,
  },
  [sym_power] = {
    .visible = true,
    .named = true,
  },
  [sym_assign] = {
    .visible = true,
    .named = true,
  },
  [sym_add_assign] = {
    .visible = true,
    .named = true,
  },
  [sym_sub_assign] = {
    .visible = true,
    .named = true,
  },
  [sym_mul_assign] = {
    .visible = true,
    .named = true,
  },
  [sym_pow_assign] = {
    .visible = true,
    .named = true,
  },
  [sym_div_assign] = {
    .visible = true,
    .named = true,
  },
  [sym_rem_assign] = {
    .visible = true,
    .named = true,
  },
  [sym_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_not_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_greater] = {
    .visible = true,
    .named = true,
  },
  [sym_greater_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_less] = {
    .visible = true,
    .named = true,
  },
  [sym_less_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_identical] = {
    .visible = true,
    .named = true,
  },
  [sym_not_identical] = {
    .visible = true,
    .named = true,
  },
  [sym_and] = {
    .visible = true,
    .named = true,
  },
  [sym_or] = {
    .visible = true,
    .named = true,
  },
  [sym_xor] = {
    .visible = true,
    .named = true,
  },
  [sym_not] = {
    .visible = true,
    .named = true,
  },
  [sym_concat] = {
    .visible = true,
    .named = true,
  },
  [sym_remove] = {
    .visible = true,
    .named = true,
  },
  [sym_contains] = {
    .visible = true,
    .named = true,
  },
  [sym_main_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_build_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_test_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_fn_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_type_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_ref_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_let_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_mut_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_true_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_false_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_none_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_async_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_const_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_pub_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_else_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_raw_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__ident] = {
    .visible = false,
    .named = true,
  },
  [sym__type_ident] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym__toplevel] = {
    .visible = false,
    .named = true,
  },
  [sym_main] = {
    .visible = true,
    .named = true,
  },
  [sym_build] = {
    .visible = true,
    .named = true,
  },
  [sym_test] = {
    .visible = true,
    .named = true,
  },
  [sym_entry_point] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_fn_signature] = {
    .visible = true,
    .named = true,
  },
  [sym__fn_modifiers] = {
    .visible = false,
    .named = true,
  },
  [sym_param_list] = {
    .visible = true,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [sym_return_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__type_prelude] = {
    .visible = false,
    .named = true,
  },
  [sym_struct] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_field] = {
    .visible = true,
    .named = true,
  },
  [sym_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_struct] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_field] = {
    .visible = true,
    .named = true,
  },
  [sym_empty_struct] = {
    .visible = true,
    .named = true,
  },
  [sym_type_item] = {
    .visible = true,
    .named = true,
  },
  [sym_result_type] = {
    .visible = true,
    .named = true,
  },
  [sym_optional_type] = {
    .visible = true,
    .named = true,
  },
  [sym_set_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_dict_type] = {
    .visible = true,
    .named = true,
  },
  [sym_ordered_dict_type] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_type] = {
    .visible = true,
    .named = true,
  },
  [sym_generic_type] = {
    .visible = true,
    .named = true,
  },
  [sym_basic_type] = {
    .visible = true,
    .named = true,
  },
  [sym_comma] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_visibility] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_type_ident] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_param_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_struct_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 2,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 2,
  [10] = 10,
  [11] = 11,
  [12] = 2,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 13,
  [17] = 14,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 18,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 26,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 25,
  [47] = 30,
  [48] = 27,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 56,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 83,
  [85] = 38,
  [86] = 19,
  [87] = 37,
  [88] = 36,
  [89] = 35,
  [90] = 42,
  [91] = 15,
  [92] = 11,
  [93] = 32,
  [94] = 33,
  [95] = 41,
  [96] = 96,
  [97] = 40,
  [98] = 43,
  [99] = 99,
  [100] = 44,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 96,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 119,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 129,
  [131] = 131,
  [132] = 132,
  [133] = 118,
  [134] = 134,
  [135] = 111,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 143,
  [149] = 139,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 111,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(sym__word);
      if (eof) ADVANCE(46);
      if (lookahead == '0') ADVANCE(97);
      if (lookahead == 'T') ADVANCE(154);
      if (lookahead == '_') ADVANCE(168);
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == 'b') ADVANCE(144);
      if (lookahead == 'f') ADVANCE(124);
      if (lookahead == 'i') ADVANCE(125);
      if (lookahead == 'l') ADVANCE(107);
      if (lookahead == 'm') ADVANCE(100);
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead == 'o') ADVANCE(133);
      if (lookahead == 'p') ADVANCE(145);
      if (lookahead == 'r') ADVANCE(108);
      if (lookahead == 't') ADVANCE(109);
      if (lookahead == 'x') ADVANCE(129);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('c' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(158);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(54);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '?') ADVANCE(53);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == 'p') ADVANCE(147);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(158);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '!') ADVANCE(54);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '?') ADVANCE(53);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(158);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == 'T') ADVANCE(24);
      if (lookahead == 'l') ADVANCE(114);
      if (lookahead == 'm') ADVANCE(148);
      if (lookahead == 'p') ADVANCE(147);
      if (lookahead == 'r') ADVANCE(113);
      if (lookahead == '}') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(3)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(54);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == '?') ADVANCE(53);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == ']') ADVANCE(58);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(158);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(89);
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '/') ADVANCE(93);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(94);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == 'p') ADVANCE(147);
      if (lookahead == '{') ADVANCE(59);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(158);
      END_STATE();
    case 12:
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == 'l') ADVANCE(114);
      if (lookahead == 'm') ADVANCE(148);
      if (lookahead == 'r') ADVANCE(113);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == 'T') ADVANCE(24);
      if (lookahead == 'l') ADVANCE(114);
      if (lookahead == 'm') ADVANCE(148);
      if (lookahead == 'p') ADVANCE(147);
      if (lookahead == 'r') ADVANCE(113);
      if (lookahead == '}') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == 'T') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead == 't') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(172);
      END_STATE();
    case 16:
      if (lookahead == '2') ADVANCE(95);
      END_STATE();
    case 17:
      if (lookahead == '3') ADVANCE(16);
      if (lookahead == '6') ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == '4') ADVANCE(95);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(4);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(61);
      END_STATE();
    case 21:
      if (lookahead == 'A') ADVANCE(36);
      END_STATE();
    case 22:
      if (lookahead == 'D') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 'D') ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == 'O') ADVANCE(22);
      END_STATE();
    case 25:
      if (lookahead == 'O') ADVANCE(48);
      END_STATE();
    case 26:
      if (lookahead == 'O') ADVANCE(19);
      END_STATE();
    case 27:
      if (lookahead == 'O') ADVANCE(23);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(86);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(17);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 39:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 42:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 43:
      if (lookahead == 'y') ADVANCE(39);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 45:
      if (eof) ADVANCE(46);
      if (lookahead == '!') ADVANCE(54);
      if (lookahead == '"') ADVANCE(89);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == '=') ADVANCE(62);
      if (lookahead == '?') ADVANCE(53);
      if (lookahead == 'T') ADVANCE(157);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == ']') ADVANCE(58);
      if (lookahead == 'b') ADVANCE(146);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == 'm') ADVANCE(101);
      if (lookahead == 'p') ADVANCE(147);
      if (lookahead == 't') ADVANCE(111);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(60);
      if (lookahead == 8594) ADVANCE(61);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(45)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(158);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_annotation);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_statement);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_statement);
      if (lookahead == ':') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__semicolon);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_question_mark);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_exclamation_mark);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_paren_open);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_paren_close);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_bracket_open);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_bracket_close);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_brace_open);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_brace_close);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_single_arrow);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_assign);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_and);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_or);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_xor);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_not);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_contains);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_main_keyword);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_main_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_build_keyword);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_build_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_test_keyword);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_test_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_fn_keyword);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_fn_keyword);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_fn_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_type_keyword);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_type_keyword);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_type_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_ref_keyword);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_ref_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_let_keyword);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_let_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_mut_keyword);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_mut_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_pub_keyword);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_pub_keyword);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_pub_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '"') ADVANCE(8);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '/') ADVANCE(93);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(90);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(172);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_raw_string_literal);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(8);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_number_literal);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == '_') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == '_') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'a') ADVANCE(120);
      if (lookahead == 'u') ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'a') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'b') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'b') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'd') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'd') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'd') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == 'y') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == 'y') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'f') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'f') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'i') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'i') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'i') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'i') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'l') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'l') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'n') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'n') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'n') ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'n') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'n') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'n') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'o') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'o') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'p') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'p') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'r') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'r') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 's') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 's') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 't') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 't') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 't') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 't') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 't') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 't') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 't') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'u') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'u') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'u') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'u') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'u') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__ident);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__type_ident);
      if (lookahead == ':') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__type_ident);
      if (lookahead == 'D') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__type_ident);
      if (lookahead == 'D') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__type_ident);
      if (lookahead == 'O') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__type_ident);
      if (lookahead == 'O') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__type_ident);
      if (lookahead == 'O') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__type_ident);
      if (lookahead == 'O') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__type_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '1') ADVANCE(161);
      if (lookahead == '3') ADVANCE(160);
      if (lookahead == '6') ADVANCE(162);
      if (lookahead == '8') ADVANCE(99);
      if (lookahead == 's') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '2') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '2') ADVANCE(163);
      if (lookahead == '6') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '4') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '8') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'u') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'z') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(168);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '\r') ADVANCE(3);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(2);
      if (lookahead == 'e') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(5);
      if (lookahead == 't') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 7:
      if (lookahead == 'y') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 12:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_else_keyword);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_none_keyword);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_true_keyword);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_async_keyword);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_const_keyword);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_false_keyword);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 45},
  [2] = {.lex_state = 45},
  [3] = {.lex_state = 45},
  [4] = {.lex_state = 45},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 45},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 45},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 45},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 45},
  [33] = {.lex_state = 45},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 45},
  [36] = {.lex_state = 45},
  [37] = {.lex_state = 45},
  [38] = {.lex_state = 45},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 45},
  [41] = {.lex_state = 45},
  [42] = {.lex_state = 45},
  [43] = {.lex_state = 45},
  [44] = {.lex_state = 45},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 45},
  [52] = {.lex_state = 45},
  [53] = {.lex_state = 45},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 45},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 13},
  [58] = {.lex_state = 45},
  [59] = {.lex_state = 45},
  [60] = {.lex_state = 45},
  [61] = {.lex_state = 45},
  [62] = {.lex_state = 45},
  [63] = {.lex_state = 45},
  [64] = {.lex_state = 45},
  [65] = {.lex_state = 45},
  [66] = {.lex_state = 45},
  [67] = {.lex_state = 45},
  [68] = {.lex_state = 45},
  [69] = {.lex_state = 45},
  [70] = {.lex_state = 45},
  [71] = {.lex_state = 45},
  [72] = {.lex_state = 45},
  [73] = {.lex_state = 45},
  [74] = {.lex_state = 45},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 45},
  [77] = {.lex_state = 45},
  [78] = {.lex_state = 12},
  [79] = {.lex_state = 12},
  [80] = {.lex_state = 12},
  [81] = {.lex_state = 14},
  [82] = {.lex_state = 12},
  [83] = {.lex_state = 45},
  [84] = {.lex_state = 45},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 12},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 45},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 12},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 45},
  [118] = {.lex_state = 45},
  [119] = {.lex_state = 45},
  [120] = {.lex_state = 45},
  [121] = {.lex_state = 45},
  [122] = {.lex_state = 45},
  [123] = {.lex_state = 45},
  [124] = {.lex_state = 45},
  [125] = {.lex_state = 14},
  [126] = {.lex_state = 45},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 45},
  [130] = {.lex_state = 45},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 45},
  [133] = {.lex_state = 45},
  [134] = {.lex_state = 6},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 45},
  [138] = {.lex_state = 13},
  [139] = {.lex_state = 45},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 45},
  [144] = {.lex_state = 45},
  [145] = {.lex_state = 13},
  [146] = {.lex_state = 13},
  [147] = {.lex_state = 45},
  [148] = {.lex_state = 45},
  [149] = {.lex_state = 45},
  [150] = {.lex_state = 45},
  [151] = {.lex_state = 14},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 45},
  [154] = {.lex_state = 45},
  [155] = {.lex_state = 5},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 5},
  [158] = {.lex_state = 45},
  [159] = {.lex_state = 14},
  [160] = {.lex_state = 45},
  [161] = {.lex_state = 45},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 45},
  [164] = {.lex_state = 45},
  [165] = {.lex_state = 45},
  [166] = {.lex_state = 45},
  [167] = {.lex_state = 45},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 5},
  [170] = {.lex_state = 45},
  [171] = {.lex_state = 45},
  [172] = {.lex_state = 45},
  [173] = {.lex_state = 45},
  [174] = {.lex_state = 45},
  [175] = {.lex_state = 45},
  [176] = {.lex_state = 14},
  [177] = {.lex_state = 5},
  [178] = {.lex_state = 45},
  [179] = {.lex_state = 45},
  [180] = {.lex_state = 45},
  [181] = {.lex_state = 45},
  [182] = {.lex_state = 45},
  [183] = {.lex_state = 45},
  [184] = {.lex_state = 45},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__word] = ACTIONS(1),
    [sym_annotation] = ACTIONS(1),
    [sym_statement] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_colon] = ACTIONS(1),
    [sym__semicolon] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [sym_question_mark] = ACTIONS(1),
    [sym_exclamation_mark] = ACTIONS(1),
    [sym_paren_open] = ACTIONS(1),
    [sym_paren_close] = ACTIONS(1),
    [sym_bracket_open] = ACTIONS(1),
    [sym_bracket_close] = ACTIONS(1),
    [sym_brace_open] = ACTIONS(1),
    [sym_brace_close] = ACTIONS(1),
    [sym_single_arrow] = ACTIONS(1),
    [sym_double_arrow] = ACTIONS(1),
    [sym_plus] = ACTIONS(1),
    [sym_minus] = ACTIONS(1),
    [sym_multiply] = ACTIONS(1),
    [sym_divide] = ACTIONS(1),
    [sym_remainder] = ACTIONS(1),
    [sym_power] = ACTIONS(1),
    [sym_assign] = ACTIONS(1),
    [sym_add_assign] = ACTIONS(1),
    [sym_sub_assign] = ACTIONS(1),
    [sym_mul_assign] = ACTIONS(1),
    [sym_pow_assign] = ACTIONS(1),
    [sym_div_assign] = ACTIONS(1),
    [sym_rem_assign] = ACTIONS(1),
    [sym_equal] = ACTIONS(1),
    [sym_not_equal] = ACTIONS(1),
    [sym_greater] = ACTIONS(1),
    [sym_greater_equal] = ACTIONS(1),
    [sym_less] = ACTIONS(1),
    [sym_less_equal] = ACTIONS(1),
    [sym_identical] = ACTIONS(1),
    [sym_not_identical] = ACTIONS(1),
    [sym_and] = ACTIONS(1),
    [sym_or] = ACTIONS(1),
    [sym_xor] = ACTIONS(1),
    [sym_not] = ACTIONS(1),
    [sym_concat] = ACTIONS(1),
    [sym_remove] = ACTIONS(1),
    [sym_contains] = ACTIONS(1),
    [sym_main_keyword] = ACTIONS(1),
    [sym_build_keyword] = ACTIONS(1),
    [sym_test_keyword] = ACTIONS(1),
    [sym_fn_keyword] = ACTIONS(1),
    [sym_type_keyword] = ACTIONS(1),
    [sym_ref_keyword] = ACTIONS(1),
    [sym_let_keyword] = ACTIONS(1),
    [sym_mut_keyword] = ACTIONS(1),
    [sym_true_keyword] = ACTIONS(1),
    [sym_false_keyword] = ACTIONS(1),
    [sym_none_keyword] = ACTIONS(1),
    [sym_async_keyword] = ACTIONS(1),
    [sym_const_keyword] = ACTIONS(1),
    [sym_pub_keyword] = ACTIONS(1),
    [sym_else_keyword] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_raw_string_literal] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [sym__ident] = ACTIONS(1),
    [sym__type_ident] = ACTIONS(1),
    [sym__comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source] = STATE(180),
    [sym__toplevel] = STATE(3),
    [sym_main] = STATE(3),
    [sym_build] = STATE(3),
    [sym_test] = STATE(3),
    [sym_entry_point] = STATE(3),
    [sym_function] = STATE(3),
    [sym_fn_signature] = STATE(163),
    [sym__fn_modifiers] = STATE(176),
    [sym_type_declaration] = STATE(3),
    [sym__type_prelude] = STATE(53),
    [sym_struct] = STATE(62),
    [sym_alias] = STATE(62),
    [sym_tuple_struct] = STATE(62),
    [sym_empty_struct] = STATE(62),
    [sym_visibility] = STATE(151),
    [sym_ident] = STATE(150),
    [aux_sym_source_repeat1] = STATE(3),
    [aux_sym_function_repeat1] = STATE(81),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_annotation] = ACTIONS(7),
    [sym_main_keyword] = ACTIONS(9),
    [sym_build_keyword] = ACTIONS(11),
    [sym_test_keyword] = ACTIONS(13),
    [sym_fn_keyword] = ACTIONS(15),
    [sym_type_keyword] = ACTIONS(17),
    [sym_pub_keyword] = ACTIONS(19),
    [sym__ident] = ACTIONS(21),
    [sym__comment] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(27), 1,
      sym_paren_open,
    ACTIONS(29), 1,
      sym_bracket_open,
    ACTIONS(31), 1,
      sym_brace_open,
    ACTIONS(35), 1,
      sym__type_ident,
    STATE(33), 1,
      sym_ident,
    STATE(36), 1,
      sym_type_ident,
    STATE(42), 1,
      sym_type_item,
    ACTIONS(25), 4,
      ts_builtin_sym_end,
      sym_annotation,
      sym_question_mark,
      sym_exclamation_mark,
    ACTIONS(33), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
    STATE(19), 9,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_generic_type,
      sym_basic_type,
  [51] = 18,
    ACTIONS(7), 1,
      sym_annotation,
    ACTIONS(9), 1,
      sym_main_keyword,
    ACTIONS(11), 1,
      sym_build_keyword,
    ACTIONS(13), 1,
      sym_test_keyword,
    ACTIONS(15), 1,
      sym_fn_keyword,
    ACTIONS(17), 1,
      sym_type_keyword,
    ACTIONS(19), 1,
      sym_pub_keyword,
    ACTIONS(21), 1,
      sym__ident,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(53), 1,
      sym__type_prelude,
    STATE(81), 1,
      aux_sym_function_repeat1,
    STATE(150), 1,
      sym_ident,
    STATE(151), 1,
      sym_visibility,
    STATE(163), 1,
      sym_fn_signature,
    STATE(176), 1,
      sym__fn_modifiers,
    STATE(62), 4,
      sym_struct,
      sym_alias,
      sym_tuple_struct,
      sym_empty_struct,
    STATE(4), 8,
      sym__toplevel,
      sym_main,
      sym_build,
      sym_test,
      sym_entry_point,
      sym_function,
      sym_type_declaration,
      aux_sym_source_repeat1,
  [116] = 18,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      sym_annotation,
    ACTIONS(44), 1,
      sym_main_keyword,
    ACTIONS(47), 1,
      sym_build_keyword,
    ACTIONS(50), 1,
      sym_test_keyword,
    ACTIONS(53), 1,
      sym_fn_keyword,
    ACTIONS(56), 1,
      sym_type_keyword,
    ACTIONS(59), 1,
      sym_pub_keyword,
    ACTIONS(62), 1,
      sym__ident,
    STATE(53), 1,
      sym__type_prelude,
    STATE(81), 1,
      aux_sym_function_repeat1,
    STATE(150), 1,
      sym_ident,
    STATE(151), 1,
      sym_visibility,
    STATE(163), 1,
      sym_fn_signature,
    STATE(176), 1,
      sym__fn_modifiers,
    STATE(62), 4,
      sym_struct,
      sym_alias,
      sym_tuple_struct,
      sym_empty_struct,
    STATE(4), 8,
      sym__toplevel,
      sym_main,
      sym_build,
      sym_test,
      sym_entry_point,
      sym_function,
      sym_type_declaration,
      aux_sym_source_repeat1,
  [181] = 11,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(27), 1,
      sym_paren_open,
    ACTIONS(29), 1,
      sym_bracket_open,
    ACTIONS(31), 1,
      sym_brace_open,
    ACTIONS(65), 1,
      sym__ident,
    ACTIONS(67), 1,
      sym__type_ident,
    STATE(33), 1,
      sym_ident,
    STATE(36), 1,
      sym_type_ident,
    STATE(42), 1,
      sym_type_item,
    ACTIONS(25), 7,
      anon_sym_COMMA,
      sym_colon,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_bracket_close,
      sym_brace_close,
    STATE(19), 9,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_generic_type,
      sym_basic_type,
  [229] = 17,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    ACTIONS(71), 1,
      sym_paren_open,
    ACTIONS(73), 1,
      sym_paren_close,
    ACTIONS(75), 1,
      sym_bracket_open,
    ACTIONS(77), 1,
      sym_brace_open,
    ACTIONS(79), 1,
      sym_pub_keyword,
    ACTIONS(81), 1,
      sym__ident,
    ACTIONS(83), 1,
      sym__type_ident,
    ACTIONS(85), 1,
      sym__newline,
    STATE(45), 1,
      sym_visibility,
    STATE(56), 1,
      aux_sym_struct_repeat1,
    STATE(88), 1,
      sym_type_ident,
    STATE(94), 1,
      sym_ident,
    STATE(104), 1,
      sym_type_item,
    STATE(142), 1,
      sym_tuple_field,
    STATE(86), 9,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_generic_type,
      sym_basic_type,
  [289] = 17,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    ACTIONS(71), 1,
      sym_paren_open,
    ACTIONS(75), 1,
      sym_bracket_open,
    ACTIONS(77), 1,
      sym_brace_open,
    ACTIONS(79), 1,
      sym_pub_keyword,
    ACTIONS(81), 1,
      sym__ident,
    ACTIONS(83), 1,
      sym__type_ident,
    ACTIONS(85), 1,
      sym__newline,
    ACTIONS(87), 1,
      sym_paren_close,
    STATE(45), 1,
      sym_visibility,
    STATE(56), 1,
      aux_sym_struct_repeat1,
    STATE(88), 1,
      sym_type_ident,
    STATE(94), 1,
      sym_ident,
    STATE(104), 1,
      sym_type_item,
    STATE(142), 1,
      sym_tuple_field,
    STATE(86), 9,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_generic_type,
      sym_basic_type,
  [349] = 16,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    ACTIONS(71), 1,
      sym_paren_open,
    ACTIONS(75), 1,
      sym_bracket_open,
    ACTIONS(77), 1,
      sym_brace_open,
    ACTIONS(79), 1,
      sym_pub_keyword,
    ACTIONS(81), 1,
      sym__ident,
    ACTIONS(83), 1,
      sym__type_ident,
    ACTIONS(85), 1,
      sym__newline,
    STATE(45), 1,
      sym_visibility,
    STATE(56), 1,
      aux_sym_struct_repeat1,
    STATE(88), 1,
      sym_type_ident,
    STATE(94), 1,
      sym_ident,
    STATE(104), 1,
      sym_type_item,
    STATE(142), 1,
      sym_tuple_field,
    STATE(86), 9,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_generic_type,
      sym_basic_type,
  [406] = 12,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(25), 1,
      sym__newline,
    ACTIONS(71), 1,
      sym_paren_open,
    ACTIONS(75), 1,
      sym_bracket_open,
    ACTIONS(77), 1,
      sym_brace_open,
    ACTIONS(81), 1,
      sym__ident,
    ACTIONS(83), 1,
      sym__type_ident,
    STATE(88), 1,
      sym_type_ident,
    STATE(90), 1,
      sym_type_item,
    STATE(94), 1,
      sym_ident,
    ACTIONS(33), 5,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_brace_close,
    STATE(86), 9,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_generic_type,
      sym_basic_type,
  [455] = 14,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(79), 1,
      sym_pub_keyword,
    ACTIONS(81), 1,
      sym__ident,
    ACTIONS(89), 1,
      sym_paren_open,
    ACTIONS(91), 1,
      sym_paren_close,
    ACTIONS(93), 1,
      sym_bracket_open,
    ACTIONS(95), 1,
      sym_brace_open,
    ACTIONS(97), 1,
      sym__type_ident,
    STATE(45), 1,
      sym_visibility,
    STATE(88), 1,
      sym_type_ident,
    STATE(94), 1,
      sym_ident,
    STATE(104), 1,
      sym_type_item,
    STATE(108), 1,
      sym_tuple_field,
    STATE(86), 9,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_generic_type,
      sym_basic_type,
  [506] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(101), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
    ACTIONS(99), 12,
      ts_builtin_sym_end,
      sym_annotation,
      anon_sym_COMMA,
      sym_colon,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_open,
      sym_paren_close,
      sym_bracket_close,
      sym_brace_open,
      sym_brace_close,
      sym_assign,
  [533] = 10,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(27), 1,
      sym_paren_open,
    ACTIONS(29), 1,
      sym_bracket_open,
    ACTIONS(65), 1,
      sym__ident,
    ACTIONS(67), 1,
      sym__type_ident,
    STATE(33), 1,
      sym_ident,
    STATE(36), 1,
      sym_type_ident,
    STATE(42), 1,
      sym_type_item,
    ACTIONS(25), 3,
      sym_question_mark,
      sym_exclamation_mark,
      sym_brace_open,
    STATE(19), 9,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_generic_type,
      sym_basic_type,
  [574] = 11,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(27), 1,
      sym_paren_open,
    ACTIONS(29), 1,
      sym_bracket_open,
    ACTIONS(31), 1,
      sym_brace_open,
    ACTIONS(65), 1,
      sym__ident,
    ACTIONS(67), 1,
      sym__type_ident,
    ACTIONS(103), 1,
      sym_paren_close,
    STATE(33), 1,
      sym_ident,
    STATE(36), 1,
      sym_type_ident,
    STATE(122), 1,
      sym_type_item,
    STATE(19), 9,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_generic_type,
      sym_basic_type,
  [616] = 11,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(27), 1,
      sym_paren_open,
    ACTIONS(29), 1,
      sym_bracket_open,
    ACTIONS(31), 1,
      sym_brace_open,
    ACTIONS(65), 1,
      sym__ident,
    ACTIONS(67), 1,
      sym__type_ident,
    ACTIONS(105), 1,
      sym_paren_close,
    STATE(33), 1,
      sym_ident,
    STATE(36), 1,
      sym_type_ident,
    STATE(122), 1,
      sym_type_item,
    STATE(19), 9,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_generic_type,
      sym_basic_type,
  [658] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(109), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
    ACTIONS(107), 11,
      ts_builtin_sym_end,
      sym_annotation,
      anon_sym_COMMA,
      sym_colon,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_open,
      sym_paren_close,
      sym_bracket_close,
      sym_brace_open,
      sym_brace_close,
  [684] = 11,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(27), 1,
      sym_paren_open,
    ACTIONS(29), 1,
      sym_bracket_open,
    ACTIONS(31), 1,
      sym_brace_open,
    ACTIONS(65), 1,
      sym__ident,
    ACTIONS(67), 1,
      sym__type_ident,
    ACTIONS(111), 1,
      sym_paren_close,
    STATE(33), 1,
      sym_ident,
    STATE(36), 1,
      sym_type_ident,
    STATE(122), 1,
      sym_type_item,
    STATE(19), 9,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_generic_type,
      sym_basic_type,
  [726] = 11,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(27), 1,
      sym_paren_open,
    ACTIONS(29), 1,
      sym_bracket_open,
    ACTIONS(31), 1,
      sym_brace_open,
    ACTIONS(65), 1,
      sym__ident,
    ACTIONS(67), 1,
      sym__type_ident,
    ACTIONS(113), 1,
      sym_paren_close,
    STATE(33), 1,
      sym_ident,
    STATE(36), 1,
      sym_type_ident,
    STATE(122), 1,
      sym_type_item,
    STATE(19), 9,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_generic_type,
      sym_basic_type,
  [768] = 10,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(27), 1,
      sym_paren_open,
    ACTIONS(29), 1,
      sym_bracket_open,
    ACTIONS(31), 1,
      sym_brace_open,
    ACTIONS(65), 1,
      sym__ident,
    ACTIONS(67), 1,
      sym__type_ident,
    STATE(33), 1,
      sym_ident,
    STATE(36), 1,
      sym_type_ident,
    STATE(148), 1,
      sym_type_item,
    STATE(19), 9,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_generic_type,
      sym_basic_type,
  [807] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(117), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
    ACTIONS(115), 10,
      ts_builtin_sym_end,
      sym_annotation,
      anon_sym_COMMA,
      sym_colon,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_bracket_close,
      sym_brace_open,
      sym_brace_close,
  [832] = 10,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(27), 1,
      sym_paren_open,
    ACTIONS(29), 1,
      sym_bracket_open,
    ACTIONS(31), 1,
      sym_brace_open,
    ACTIONS(65), 1,
      sym__ident,
    ACTIONS(67), 1,
      sym__type_ident,
    STATE(33), 1,
      sym_ident,
    STATE(36), 1,
      sym_type_ident,
    STATE(122), 1,
      sym_type_item,
    STATE(19), 9,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_generic_type,
      sym_basic_type,
  [871] = 10,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(89), 1,
      sym_paren_open,
    ACTIONS(93), 1,
      sym_bracket_open,
    ACTIONS(95), 1,
      sym_brace_open,
    ACTIONS(97), 1,
      sym__type_ident,
    ACTIONS(119), 1,
      sym__ident,
    STATE(88), 1,
      sym_type_ident,
    STATE(94), 1,
      sym_ident,
    STATE(103), 1,
      sym_type_item,
    STATE(86), 9,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_generic_type,
      sym_basic_type,
  [910] = 10,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(27), 1,
      sym_paren_open,
    ACTIONS(29), 1,
      sym_bracket_open,
    ACTIONS(31), 1,
      sym_brace_open,
    ACTIONS(65), 1,
      sym__ident,
    ACTIONS(67), 1,
      sym__type_ident,
    STATE(33), 1,
      sym_ident,
    STATE(36), 1,
      sym_type_ident,
    STATE(143), 1,
      sym_type_item,
    STATE(19), 9,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_generic_type,
      sym_basic_type,
  [949] = 10,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(27), 1,
      sym_paren_open,
    ACTIONS(29), 1,
      sym_bracket_open,
    ACTIONS(31), 1,
      sym_brace_open,
    ACTIONS(65), 1,
      sym__ident,
    ACTIONS(67), 1,
      sym__type_ident,
    STATE(33), 1,
      sym_ident,
    STATE(36), 1,
      sym_type_ident,
    STATE(132), 1,
      sym_type_item,
    STATE(19), 9,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_generic_type,
      sym_basic_type,
  [988] = 10,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(89), 1,
      sym_paren_open,
    ACTIONS(93), 1,
      sym_bracket_open,
    ACTIONS(95), 1,
      sym_brace_open,
    ACTIONS(97), 1,
      sym__type_ident,
    ACTIONS(119), 1,
      sym__ident,
    STATE(88), 1,
      sym_type_ident,
    STATE(94), 1,
      sym_ident,
    STATE(115), 1,
      sym_type_item,
    STATE(86), 9,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_generic_type,
      sym_basic_type,
  [1027] = 10,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(27), 1,
      sym_paren_open,
    ACTIONS(29), 1,
      sym_bracket_open,
    ACTIONS(31), 1,
      sym_brace_open,
    ACTIONS(65), 1,
      sym__ident,
    ACTIONS(67), 1,
      sym__type_ident,
    STATE(33), 1,
      sym_ident,
    STATE(36), 1,
      sym_type_ident,
    STATE(130), 1,
      sym_type_item,
    STATE(19), 9,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_generic_type,
      sym_basic_type,
  [1066] = 10,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(27), 1,
      sym_paren_open,
    ACTIONS(29), 1,
      sym_bracket_open,
    ACTIONS(31), 1,
      sym_brace_open,
    ACTIONS(65), 1,
      sym__ident,
    ACTIONS(67), 1,
      sym__type_ident,
    STATE(33), 1,
      sym_ident,
    STATE(36), 1,
      sym_type_ident,
    STATE(149), 1,
      sym_type_item,
    STATE(19), 9,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_generic_type,
      sym_basic_type,
  [1105] = 10,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(27), 1,
      sym_paren_open,
    ACTIONS(29), 1,
      sym_bracket_open,
    ACTIONS(31), 1,
      sym_brace_open,
    ACTIONS(65), 1,
      sym__ident,
    ACTIONS(67), 1,
      sym__type_ident,
    STATE(33), 1,
      sym_ident,
    STATE(36), 1,
      sym_type_ident,
    STATE(126), 1,
      sym_type_item,
    STATE(19), 9,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_generic_type,
      sym_basic_type,
  [1144] = 10,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(27), 1,
      sym_paren_open,
    ACTIONS(29), 1,
      sym_bracket_open,
    ACTIONS(31), 1,
      sym_brace_open,
    ACTIONS(65), 1,
      sym__ident,
    ACTIONS(67), 1,
      sym__type_ident,
    STATE(33), 1,
      sym_ident,
    STATE(36), 1,
      sym_type_ident,
    STATE(120), 1,
      sym_type_item,
    STATE(19), 9,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_generic_type,
      sym_basic_type,
  [1183] = 10,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(89), 1,
      sym_paren_open,
    ACTIONS(93), 1,
      sym_bracket_open,
    ACTIONS(95), 1,
      sym_brace_open,
    ACTIONS(97), 1,
      sym__type_ident,
    ACTIONS(119), 1,
      sym__ident,
    STATE(88), 1,
      sym_type_ident,
    STATE(94), 1,
      sym_ident,
    STATE(116), 1,
      sym_type_item,
    STATE(86), 9,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_generic_type,
      sym_basic_type,
  [1222] = 10,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(27), 1,
      sym_paren_open,
    ACTIONS(29), 1,
      sym_bracket_open,
    ACTIONS(31), 1,
      sym_brace_open,
    ACTIONS(65), 1,
      sym__ident,
    ACTIONS(67), 1,
      sym__type_ident,
    STATE(33), 1,
      sym_ident,
    STATE(36), 1,
      sym_type_ident,
    STATE(84), 1,
      sym_type_item,
    STATE(19), 9,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_generic_type,
      sym_basic_type,
  [1261] = 10,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(27), 1,
      sym_paren_open,
    ACTIONS(29), 1,
      sym_bracket_open,
    ACTIONS(31), 1,
      sym_brace_open,
    ACTIONS(65), 1,
      sym__ident,
    ACTIONS(67), 1,
      sym__type_ident,
    STATE(33), 1,
      sym_ident,
    STATE(36), 1,
      sym_type_ident,
    STATE(144), 1,
      sym_type_item,
    STATE(19), 9,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_generic_type,
      sym_basic_type,
  [1300] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(123), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
    ACTIONS(121), 10,
      ts_builtin_sym_end,
      sym_annotation,
      anon_sym_COMMA,
      sym_colon,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_bracket_close,
      sym_brace_open,
      sym_brace_close,
  [1325] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(127), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
    ACTIONS(125), 10,
      ts_builtin_sym_end,
      sym_annotation,
      anon_sym_COMMA,
      sym_colon,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_bracket_close,
      sym_brace_open,
      sym_brace_close,
  [1350] = 10,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(27), 1,
      sym_paren_open,
    ACTIONS(29), 1,
      sym_bracket_open,
    ACTIONS(31), 1,
      sym_brace_open,
    ACTIONS(65), 1,
      sym__ident,
    ACTIONS(67), 1,
      sym__type_ident,
    STATE(33), 1,
      sym_ident,
    STATE(36), 1,
      sym_type_ident,
    STATE(55), 1,
      sym_type_item,
    STATE(19), 9,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_generic_type,
      sym_basic_type,
  [1389] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(131), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
    ACTIONS(129), 10,
      ts_builtin_sym_end,
      sym_annotation,
      anon_sym_COMMA,
      sym_colon,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_bracket_close,
      sym_brace_open,
      sym_brace_close,
  [1414] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(135), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
    ACTIONS(133), 10,
      ts_builtin_sym_end,
      sym_annotation,
      anon_sym_COMMA,
      sym_colon,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_bracket_close,
      sym_brace_open,
      sym_brace_close,
  [1439] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(139), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
    ACTIONS(137), 10,
      ts_builtin_sym_end,
      sym_annotation,
      anon_sym_COMMA,
      sym_colon,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_bracket_close,
      sym_brace_open,
      sym_brace_close,
  [1464] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(143), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
    ACTIONS(141), 10,
      ts_builtin_sym_end,
      sym_annotation,
      anon_sym_COMMA,
      sym_colon,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_bracket_close,
      sym_brace_open,
      sym_brace_close,
  [1489] = 10,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(27), 1,
      sym_paren_open,
    ACTIONS(29), 1,
      sym_bracket_open,
    ACTIONS(31), 1,
      sym_brace_open,
    ACTIONS(65), 1,
      sym__ident,
    ACTIONS(67), 1,
      sym__type_ident,
    STATE(33), 1,
      sym_ident,
    STATE(36), 1,
      sym_type_ident,
    STATE(139), 1,
      sym_type_item,
    STATE(19), 9,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_generic_type,
      sym_basic_type,
  [1528] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(147), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
    ACTIONS(145), 10,
      ts_builtin_sym_end,
      sym_annotation,
      anon_sym_COMMA,
      sym_colon,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_bracket_close,
      sym_brace_open,
      sym_brace_close,
  [1553] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(151), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
    ACTIONS(149), 10,
      ts_builtin_sym_end,
      sym_annotation,
      anon_sym_COMMA,
      sym_colon,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_bracket_close,
      sym_brace_open,
      sym_brace_close,
  [1578] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(155), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
    ACTIONS(153), 10,
      ts_builtin_sym_end,
      sym_annotation,
      anon_sym_COMMA,
      sym_colon,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_bracket_close,
      sym_brace_open,
      sym_brace_close,
  [1603] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(159), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
    ACTIONS(157), 10,
      ts_builtin_sym_end,
      sym_annotation,
      anon_sym_COMMA,
      sym_colon,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_bracket_close,
      sym_brace_open,
      sym_brace_close,
  [1628] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(163), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
    ACTIONS(161), 10,
      ts_builtin_sym_end,
      sym_annotation,
      anon_sym_COMMA,
      sym_colon,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_bracket_close,
      sym_brace_open,
      sym_brace_close,
  [1653] = 10,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(89), 1,
      sym_paren_open,
    ACTIONS(93), 1,
      sym_bracket_open,
    ACTIONS(95), 1,
      sym_brace_open,
    ACTIONS(97), 1,
      sym__type_ident,
    ACTIONS(119), 1,
      sym__ident,
    STATE(88), 1,
      sym_type_ident,
    STATE(94), 1,
      sym_ident,
    STATE(113), 1,
      sym_type_item,
    STATE(86), 9,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_generic_type,
      sym_basic_type,
  [1692] = 10,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(27), 1,
      sym_paren_open,
    ACTIONS(29), 1,
      sym_bracket_open,
    ACTIONS(31), 1,
      sym_brace_open,
    ACTIONS(65), 1,
      sym__ident,
    ACTIONS(67), 1,
      sym__type_ident,
    STATE(33), 1,
      sym_ident,
    STATE(36), 1,
      sym_type_ident,
    STATE(129), 1,
      sym_type_item,
    STATE(19), 9,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_generic_type,
      sym_basic_type,
  [1731] = 10,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(27), 1,
      sym_paren_open,
    ACTIONS(29), 1,
      sym_bracket_open,
    ACTIONS(31), 1,
      sym_brace_open,
    ACTIONS(65), 1,
      sym__ident,
    ACTIONS(67), 1,
      sym__type_ident,
    STATE(33), 1,
      sym_ident,
    STATE(36), 1,
      sym_type_ident,
    STATE(83), 1,
      sym_type_item,
    STATE(19), 9,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_generic_type,
      sym_basic_type,
  [1770] = 10,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(27), 1,
      sym_paren_open,
    ACTIONS(29), 1,
      sym_bracket_open,
    ACTIONS(31), 1,
      sym_brace_open,
    ACTIONS(65), 1,
      sym__ident,
    ACTIONS(67), 1,
      sym__type_ident,
    STATE(33), 1,
      sym_ident,
    STATE(36), 1,
      sym_type_ident,
    STATE(119), 1,
      sym_type_item,
    STATE(19), 9,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_generic_type,
      sym_basic_type,
  [1809] = 12,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(21), 1,
      sym__ident,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    ACTIONS(167), 1,
      sym_brace_close,
    ACTIONS(171), 1,
      sym_pub_keyword,
    ACTIONS(173), 1,
      sym__newline,
    STATE(75), 1,
      aux_sym_struct_repeat1,
    STATE(99), 1,
      sym_visibility,
    STATE(141), 1,
      sym_struct_field,
    STATE(162), 1,
      sym_declaration_modifier,
    STATE(178), 1,
      sym_ident,
    ACTIONS(169), 3,
      sym_ref_keyword,
      sym_let_keyword,
      sym_mut_keyword,
  [1848] = 12,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(21), 1,
      sym__ident,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      sym_pub_keyword,
    ACTIONS(173), 1,
      sym__newline,
    ACTIONS(175), 1,
      sym_brace_close,
    STATE(75), 1,
      aux_sym_struct_repeat1,
    STATE(99), 1,
      sym_visibility,
    STATE(141), 1,
      sym_struct_field,
    STATE(162), 1,
      sym_declaration_modifier,
    STATE(178), 1,
      sym_ident,
    ACTIONS(169), 3,
      sym_ref_keyword,
      sym_let_keyword,
      sym_mut_keyword,
  [1887] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(177), 5,
      ts_builtin_sym_end,
      sym_annotation,
      sym_paren_open,
      sym_brace_open,
      sym_assign,
    ACTIONS(179), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1907] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(181), 5,
      ts_builtin_sym_end,
      sym_annotation,
      sym_paren_open,
      sym_brace_open,
      sym_assign,
    ACTIONS(183), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1927] = 6,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(187), 1,
      sym_paren_open,
    ACTIONS(189), 1,
      sym_brace_open,
    ACTIONS(191), 1,
      sym_assign,
    ACTIONS(185), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(193), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1953] = 11,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(21), 1,
      sym__ident,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      sym_pub_keyword,
    ACTIONS(173), 1,
      sym__newline,
    STATE(75), 1,
      aux_sym_struct_repeat1,
    STATE(99), 1,
      sym_visibility,
    STATE(141), 1,
      sym_struct_field,
    STATE(162), 1,
      sym_declaration_modifier,
    STATE(178), 1,
      sym_ident,
    ACTIONS(169), 3,
      sym_ref_keyword,
      sym_let_keyword,
      sym_mut_keyword,
  [1989] = 5,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(197), 1,
      sym_question_mark,
    ACTIONS(199), 1,
      sym_exclamation_mark,
    ACTIONS(195), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(201), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [2012] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(208), 1,
      sym__newline,
    STATE(56), 1,
      aux_sym_struct_repeat1,
    ACTIONS(206), 7,
      sym_paren_open,
      sym_paren_close,
      sym_bracket_open,
      sym_brace_open,
      sym_pub_keyword,
      sym__ident,
      sym__type_ident,
  [2034] = 9,
    ACTIONS(21), 1,
      sym__ident,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(171), 1,
      sym_pub_keyword,
    ACTIONS(211), 1,
      sym_brace_close,
    STATE(99), 1,
      sym_visibility,
    STATE(107), 1,
      sym_struct_field,
    STATE(162), 1,
      sym_declaration_modifier,
    STATE(178), 1,
      sym_ident,
    ACTIONS(169), 3,
      sym_ref_keyword,
      sym_let_keyword,
      sym_mut_keyword,
  [2064] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(213), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(215), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [2081] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(217), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(219), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [2098] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(221), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(223), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [2115] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(225), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(227), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [2132] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(229), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(231), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [2149] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(233), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(235), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [2166] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(237), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(239), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [2183] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(241), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(243), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [2200] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(245), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(247), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [2217] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(249), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(251), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [2234] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(253), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(255), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [2251] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(257), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(259), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [2268] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(261), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(263), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [2285] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(265), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(267), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [2302] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(269), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(271), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [2319] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(273), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(275), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [2336] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(277), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(279), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [2353] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    ACTIONS(284), 1,
      sym__newline,
    STATE(75), 1,
      aux_sym_struct_repeat1,
    ACTIONS(206), 6,
      sym_brace_close,
      sym_ref_keyword,
      sym_let_keyword,
      sym_mut_keyword,
      sym_pub_keyword,
      sym__ident,
  [2374] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(287), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(289), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [2391] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(291), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(293), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [2408] = 7,
    ACTIONS(21), 1,
      sym__ident,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(295), 1,
      sym_paren_close,
    STATE(121), 1,
      sym_param,
    STATE(157), 1,
      sym_declaration_modifier,
    STATE(182), 1,
      sym_ident,
    ACTIONS(169), 3,
      sym_ref_keyword,
      sym_let_keyword,
      sym_mut_keyword,
  [2432] = 7,
    ACTIONS(21), 1,
      sym__ident,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(297), 1,
      sym_paren_close,
    STATE(157), 1,
      sym_declaration_modifier,
    STATE(160), 1,
      sym_param,
    STATE(182), 1,
      sym_ident,
    ACTIONS(169), 3,
      sym_ref_keyword,
      sym_let_keyword,
      sym_mut_keyword,
  [2456] = 7,
    ACTIONS(21), 1,
      sym__ident,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(299), 1,
      sym_paren_close,
    STATE(157), 1,
      sym_declaration_modifier,
    STATE(160), 1,
      sym_param,
    STATE(182), 1,
      sym_ident,
    ACTIONS(169), 3,
      sym_ref_keyword,
      sym_let_keyword,
      sym_mut_keyword,
  [2480] = 7,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(301), 1,
      sym_annotation,
    ACTIONS(303), 1,
      sym_fn_keyword,
    ACTIONS(305), 1,
      sym_pub_keyword,
    STATE(125), 1,
      aux_sym_function_repeat1,
    STATE(167), 1,
      sym_fn_signature,
    STATE(176), 2,
      sym__fn_modifiers,
      sym_visibility,
  [2503] = 6,
    ACTIONS(21), 1,
      sym__ident,
    ACTIONS(23), 1,
      sym__comment,
    STATE(157), 1,
      sym_declaration_modifier,
    STATE(160), 1,
      sym_param,
    STATE(182), 1,
      sym_ident,
    ACTIONS(169), 3,
      sym_ref_keyword,
      sym_let_keyword,
      sym_mut_keyword,
  [2524] = 7,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(197), 1,
      sym_question_mark,
    ACTIONS(307), 1,
      anon_sym_COMMA,
    ACTIONS(309), 1,
      sym_exclamation_mark,
    ACTIONS(311), 1,
      sym_paren_close,
    STATE(14), 1,
      sym_comma,
    STATE(118), 1,
      aux_sym_tuple_type_repeat1,
  [2546] = 7,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(197), 1,
      sym_question_mark,
    ACTIONS(307), 1,
      anon_sym_COMMA,
    ACTIONS(309), 1,
      sym_exclamation_mark,
    ACTIONS(313), 1,
      sym_paren_close,
    STATE(17), 1,
      sym_comma,
    STATE(133), 1,
      aux_sym_tuple_type_repeat1,
  [2568] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(141), 1,
      sym__newline,
    ACTIONS(143), 5,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_brace_close,
  [2582] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(115), 1,
      sym__newline,
    ACTIONS(117), 5,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_brace_close,
  [2596] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(137), 1,
      sym__newline,
    ACTIONS(139), 5,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_brace_close,
  [2610] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(133), 1,
      sym__newline,
    ACTIONS(135), 5,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_brace_close,
  [2624] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(129), 1,
      sym__newline,
    ACTIONS(131), 5,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_brace_close,
  [2638] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(153), 1,
      sym__newline,
    ACTIONS(155), 5,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_brace_close,
  [2652] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(107), 1,
      sym__newline,
    ACTIONS(109), 5,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_brace_close,
  [2666] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(99), 1,
      sym__newline,
    ACTIONS(101), 5,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_brace_close,
  [2680] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(121), 1,
      sym__newline,
    ACTIONS(123), 5,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_brace_close,
  [2694] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(125), 1,
      sym__newline,
    ACTIONS(127), 5,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_brace_close,
  [2708] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(149), 1,
      sym__newline,
    ACTIONS(151), 5,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_brace_close,
  [2722] = 2,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(315), 6,
      sym_paren_open,
      sym_paren_close,
      sym_bracket_open,
      sym_brace_open,
      sym__ident,
      sym__type_ident,
  [2734] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(145), 1,
      sym__newline,
    ACTIONS(147), 5,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_brace_close,
  [2748] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(157), 1,
      sym__newline,
    ACTIONS(159), 5,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_brace_close,
  [2762] = 5,
    ACTIONS(21), 1,
      sym__ident,
    ACTIONS(23), 1,
      sym__comment,
    STATE(152), 1,
      sym_declaration_modifier,
    STATE(184), 1,
      sym_ident,
    ACTIONS(169), 3,
      sym_ref_keyword,
      sym_let_keyword,
      sym_mut_keyword,
  [2780] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(161), 1,
      sym__newline,
    ACTIONS(163), 5,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_brace_close,
  [2794] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(317), 1,
      anon_sym_COMMA,
    ACTIONS(320), 1,
      sym_brace_close,
    ACTIONS(322), 1,
      sym__newline,
    STATE(54), 1,
      aux_sym_struct_repeat1,
    STATE(101), 1,
      aux_sym_struct_repeat2,
  [2813] = 6,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(325), 1,
      sym_brace_open,
    ACTIONS(327), 1,
      anon_sym_DQUOTE,
    ACTIONS(329), 1,
      sym_raw_string_literal,
    STATE(64), 1,
      sym_body,
    STATE(171), 1,
      sym_string_literal,
  [2832] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(333), 1,
      sym_question_mark,
    ACTIONS(335), 1,
      sym_exclamation_mark,
    ACTIONS(337), 1,
      sym__newline,
    ACTIONS(331), 2,
      anon_sym_COMMA,
      sym_brace_close,
  [2849] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(333), 1,
      sym_question_mark,
    ACTIONS(335), 1,
      sym_exclamation_mark,
    ACTIONS(341), 1,
      sym__newline,
    ACTIONS(339), 2,
      anon_sym_COMMA,
      sym_paren_close,
  [2866] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(315), 1,
      sym_paren_close,
    ACTIONS(343), 4,
      sym_ref_keyword,
      sym_let_keyword,
      sym_mut_keyword,
      sym__ident,
  [2879] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(347), 1,
      sym__semicolon,
    ACTIONS(350), 1,
      sym__newline,
    STATE(106), 1,
      aux_sym_body_repeat1,
    ACTIONS(345), 2,
      sym_statement,
      sym_brace_close,
  [2896] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    ACTIONS(355), 1,
      sym_brace_close,
    ACTIONS(357), 1,
      sym__newline,
    STATE(49), 1,
      aux_sym_struct_repeat1,
    STATE(112), 1,
      aux_sym_struct_repeat2,
  [2915] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(359), 1,
      anon_sym_COMMA,
    ACTIONS(361), 1,
      sym_paren_close,
    ACTIONS(363), 1,
      sym__newline,
    STATE(7), 1,
      aux_sym_struct_repeat1,
    STATE(114), 1,
      aux_sym_tuple_struct_repeat1,
  [2934] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(367), 1,
      sym__semicolon,
    ACTIONS(369), 1,
      sym__newline,
    STATE(106), 1,
      aux_sym_body_repeat1,
    ACTIONS(365), 2,
      sym_statement,
      sym_brace_close,
  [2951] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    ACTIONS(374), 1,
      sym_paren_close,
    ACTIONS(376), 1,
      sym__newline,
    STATE(8), 1,
      aux_sym_struct_repeat1,
    STATE(110), 1,
      aux_sym_tuple_struct_repeat1,
  [2970] = 2,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(379), 5,
      sym_paren_open,
      sym_bracket_open,
      sym_brace_open,
      sym__ident,
      sym__type_ident,
  [2981] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(167), 1,
      sym_brace_close,
    ACTIONS(381), 1,
      anon_sym_COMMA,
    ACTIONS(383), 1,
      sym__newline,
    STATE(50), 1,
      aux_sym_struct_repeat1,
    STATE(101), 1,
      aux_sym_struct_repeat2,
  [3000] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(333), 1,
      sym_question_mark,
    ACTIONS(335), 1,
      sym_exclamation_mark,
    ACTIONS(387), 1,
      sym__newline,
    ACTIONS(385), 2,
      anon_sym_COMMA,
      sym_paren_close,
  [3017] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(87), 1,
      sym_paren_close,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    ACTIONS(391), 1,
      sym__newline,
    STATE(6), 1,
      aux_sym_struct_repeat1,
    STATE(110), 1,
      aux_sym_tuple_struct_repeat1,
  [3036] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(333), 1,
      sym_question_mark,
    ACTIONS(335), 1,
      sym_exclamation_mark,
    ACTIONS(395), 1,
      sym__newline,
    ACTIONS(393), 2,
      anon_sym_COMMA,
      sym_brace_close,
  [3053] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(333), 1,
      sym_question_mark,
    ACTIONS(335), 1,
      sym_exclamation_mark,
    ACTIONS(399), 1,
      sym__newline,
    ACTIONS(397), 2,
      anon_sym_COMMA,
      sym_brace_close,
  [3070] = 5,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(401), 1,
      anon_sym_COMMA,
    ACTIONS(404), 1,
      sym_paren_close,
    STATE(82), 1,
      sym_comma,
    STATE(117), 1,
      aux_sym_param_list_repeat1,
  [3086] = 5,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(105), 1,
      sym_paren_close,
    ACTIONS(307), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      sym_comma,
    STATE(124), 1,
      aux_sym_tuple_type_repeat1,
  [3102] = 5,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(197), 1,
      sym_question_mark,
    ACTIONS(309), 1,
      sym_exclamation_mark,
    ACTIONS(406), 1,
      sym_colon,
    ACTIONS(408), 1,
      sym_bracket_close,
  [3118] = 4,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(197), 1,
      sym_question_mark,
    ACTIONS(309), 1,
      sym_exclamation_mark,
    ACTIONS(410), 2,
      anon_sym_COMMA,
      sym_paren_close,
  [3132] = 5,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(412), 1,
      anon_sym_COMMA,
    ACTIONS(414), 1,
      sym_paren_close,
    STATE(80), 1,
      sym_comma,
    STATE(123), 1,
      aux_sym_param_list_repeat1,
  [3148] = 4,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(197), 1,
      sym_question_mark,
    ACTIONS(309), 1,
      sym_exclamation_mark,
    ACTIONS(416), 2,
      anon_sym_COMMA,
      sym_paren_close,
  [3162] = 5,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(299), 1,
      sym_paren_close,
    ACTIONS(412), 1,
      anon_sym_COMMA,
    STATE(79), 1,
      sym_comma,
    STATE(117), 1,
      aux_sym_param_list_repeat1,
  [3178] = 5,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(416), 1,
      sym_paren_close,
    ACTIONS(418), 1,
      anon_sym_COMMA,
    STATE(20), 1,
      sym_comma,
    STATE(124), 1,
      aux_sym_tuple_type_repeat1,
  [3194] = 4,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(421), 1,
      sym_annotation,
    STATE(125), 1,
      aux_sym_function_repeat1,
    ACTIONS(424), 2,
      sym_fn_keyword,
      sym_pub_keyword,
  [3208] = 5,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(197), 1,
      sym_question_mark,
    ACTIONS(309), 1,
      sym_exclamation_mark,
    ACTIONS(426), 1,
      sym_colon,
    ACTIONS(428), 1,
      sym_bracket_close,
  [3224] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(430), 1,
      anon_sym_DQUOTE,
    STATE(127), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(432), 2,
      aux_sym_string_literal_token1,
      sym_raw_string_literal,
  [3238] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(435), 1,
      sym__semicolon,
    ACTIONS(437), 1,
      sym_brace_close,
    ACTIONS(439), 1,
      sym__newline,
    STATE(109), 1,
      aux_sym_body_repeat1,
  [3254] = 5,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(197), 1,
      sym_question_mark,
    ACTIONS(309), 1,
      sym_exclamation_mark,
    ACTIONS(441), 1,
      sym_colon,
    ACTIONS(443), 1,
      sym_brace_close,
  [3270] = 5,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(197), 1,
      sym_question_mark,
    ACTIONS(309), 1,
      sym_exclamation_mark,
    ACTIONS(445), 1,
      sym_colon,
    ACTIONS(447), 1,
      sym_brace_close,
  [3286] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(435), 1,
      sym__semicolon,
    ACTIONS(439), 1,
      sym__newline,
    ACTIONS(449), 1,
      sym_brace_close,
    STATE(109), 1,
      aux_sym_body_repeat1,
  [3302] = 4,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(197), 1,
      sym_question_mark,
    ACTIONS(309), 1,
      sym_exclamation_mark,
    ACTIONS(451), 2,
      anon_sym_COMMA,
      sym_paren_close,
  [3316] = 5,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(113), 1,
      sym_paren_close,
    ACTIONS(307), 1,
      anon_sym_COMMA,
    STATE(16), 1,
      sym_comma,
    STATE(124), 1,
      aux_sym_tuple_type_repeat1,
  [3332] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(453), 1,
      anon_sym_DQUOTE,
    STATE(127), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(455), 2,
      aux_sym_string_literal_token1,
      sym_raw_string_literal,
  [3346] = 2,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(457), 4,
      sym_ref_keyword,
      sym_let_keyword,
      sym_mut_keyword,
      sym__ident,
  [3356] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(459), 1,
      anon_sym_DQUOTE,
    STATE(134), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(461), 2,
      aux_sym_string_literal_token1,
      sym_raw_string_literal,
  [3370] = 4,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(463), 1,
      sym_brace_open,
    ACTIONS(465), 1,
      sym_single_arrow,
    STATE(183), 1,
      sym_return_type,
  [3383] = 4,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(467), 1,
      sym_statement,
    ACTIONS(470), 1,
      sym_brace_close,
    STATE(138), 1,
      aux_sym_body_repeat2,
  [3396] = 4,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(197), 1,
      sym_question_mark,
    ACTIONS(309), 1,
      sym_exclamation_mark,
    ACTIONS(472), 1,
      sym_brace_close,
  [3409] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(435), 1,
      sym__semicolon,
    ACTIONS(439), 1,
      sym__newline,
    STATE(109), 1,
      aux_sym_body_repeat1,
  [3422] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(474), 1,
      sym__newline,
    ACTIONS(320), 2,
      anon_sym_COMMA,
      sym_brace_close,
  [3433] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(476), 1,
      sym__newline,
    ACTIONS(374), 2,
      anon_sym_COMMA,
      sym_paren_close,
  [3444] = 4,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(197), 1,
      sym_question_mark,
    ACTIONS(309), 1,
      sym_exclamation_mark,
    ACTIONS(478), 1,
      sym_bracket_close,
  [3457] = 4,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(197), 1,
      sym_question_mark,
    ACTIONS(480), 1,
      sym_exclamation_mark,
    ACTIONS(482), 1,
      sym_brace_open,
  [3470] = 4,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(484), 1,
      sym_statement,
    ACTIONS(486), 1,
      sym_brace_close,
    STATE(146), 1,
      aux_sym_body_repeat2,
  [3483] = 4,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(488), 1,
      sym_statement,
    ACTIONS(490), 1,
      sym_brace_close,
    STATE(138), 1,
      aux_sym_body_repeat2,
  [3496] = 4,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(465), 1,
      sym_single_arrow,
    ACTIONS(492), 1,
      sym_brace_open,
    STATE(173), 1,
      sym_return_type,
  [3509] = 4,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(197), 1,
      sym_question_mark,
    ACTIONS(309), 1,
      sym_exclamation_mark,
    ACTIONS(494), 1,
      sym_bracket_close,
  [3522] = 4,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(197), 1,
      sym_question_mark,
    ACTIONS(309), 1,
      sym_exclamation_mark,
    ACTIONS(496), 1,
      sym_brace_close,
  [3535] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(325), 1,
      sym_brace_open,
    STATE(58), 1,
      sym_body,
  [3545] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(498), 1,
      sym_fn_keyword,
    ACTIONS(500), 1,
      sym_type_keyword,
  [3555] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(65), 1,
      sym__ident,
    STATE(175), 1,
      sym_ident,
  [3565] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(325), 1,
      sym_brace_open,
    STATE(63), 1,
      sym_body,
  [3575] = 2,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(502), 2,
      sym_brace_open,
      sym_single_arrow,
  [3583] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(65), 1,
      sym__ident,
    STATE(170), 1,
      sym_ident,
  [3593] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(67), 1,
      sym__type_ident,
    STATE(52), 1,
      sym_type_ident,
  [3603] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(65), 1,
      sym__ident,
    STATE(179), 1,
      sym_ident,
  [3613] = 2,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(504), 2,
      sym_brace_open,
      sym_single_arrow,
  [3621] = 2,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(379), 2,
      sym_fn_keyword,
      sym_type_keyword,
  [3629] = 2,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(404), 2,
      anon_sym_COMMA,
      sym_paren_close,
  [3637] = 2,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(506), 2,
      sym_brace_open,
      sym_single_arrow,
  [3645] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(65), 1,
      sym__ident,
    STATE(184), 1,
      sym_ident,
  [3655] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(325), 1,
      sym_brace_open,
    STATE(76), 1,
      sym_body,
  [3665] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(508), 1,
      sym_paren_open,
    STATE(147), 1,
      sym_param_list,
  [3675] = 2,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(510), 2,
      sym_brace_open,
      sym_single_arrow,
  [3683] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(325), 1,
      sym_brace_open,
    STATE(77), 1,
      sym_body,
  [3693] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(325), 1,
      sym_brace_open,
    STATE(66), 1,
      sym_body,
  [3703] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(67), 1,
      sym__type_ident,
    STATE(51), 1,
      sym_type_ident,
  [3713] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(65), 1,
      sym__ident,
    STATE(164), 1,
      sym_ident,
  [3723] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(508), 1,
      sym_paren_open,
    STATE(137), 1,
      sym_param_list,
  [3733] = 3,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(325), 1,
      sym_brace_open,
    STATE(61), 1,
      sym_body,
  [3743] = 2,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(512), 1,
      sym_brace_open,
  [3750] = 2,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(514), 1,
      sym_brace_open,
  [3757] = 2,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(516), 1,
      sym_brace_open,
  [3764] = 2,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(518), 1,
      sym_colon,
  [3771] = 2,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(520), 1,
      sym_fn_keyword,
  [3778] = 2,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(522), 1,
      sym__ident,
  [3785] = 2,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(524), 1,
      sym_colon,
  [3792] = 2,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(526), 1,
      sym_colon,
  [3799] = 2,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(528), 1,
      ts_builtin_sym_end,
  [3806] = 2,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(530), 1,
      sym_brace_open,
  [3813] = 2,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(532), 1,
      sym_colon,
  [3820] = 2,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(492), 1,
      sym_brace_open,
  [3827] = 2,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(534), 1,
      sym_colon,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 116,
  [SMALL_STATE(5)] = 181,
  [SMALL_STATE(6)] = 229,
  [SMALL_STATE(7)] = 289,
  [SMALL_STATE(8)] = 349,
  [SMALL_STATE(9)] = 406,
  [SMALL_STATE(10)] = 455,
  [SMALL_STATE(11)] = 506,
  [SMALL_STATE(12)] = 533,
  [SMALL_STATE(13)] = 574,
  [SMALL_STATE(14)] = 616,
  [SMALL_STATE(15)] = 658,
  [SMALL_STATE(16)] = 684,
  [SMALL_STATE(17)] = 726,
  [SMALL_STATE(18)] = 768,
  [SMALL_STATE(19)] = 807,
  [SMALL_STATE(20)] = 832,
  [SMALL_STATE(21)] = 871,
  [SMALL_STATE(22)] = 910,
  [SMALL_STATE(23)] = 949,
  [SMALL_STATE(24)] = 988,
  [SMALL_STATE(25)] = 1027,
  [SMALL_STATE(26)] = 1066,
  [SMALL_STATE(27)] = 1105,
  [SMALL_STATE(28)] = 1144,
  [SMALL_STATE(29)] = 1183,
  [SMALL_STATE(30)] = 1222,
  [SMALL_STATE(31)] = 1261,
  [SMALL_STATE(32)] = 1300,
  [SMALL_STATE(33)] = 1325,
  [SMALL_STATE(34)] = 1350,
  [SMALL_STATE(35)] = 1389,
  [SMALL_STATE(36)] = 1414,
  [SMALL_STATE(37)] = 1439,
  [SMALL_STATE(38)] = 1464,
  [SMALL_STATE(39)] = 1489,
  [SMALL_STATE(40)] = 1528,
  [SMALL_STATE(41)] = 1553,
  [SMALL_STATE(42)] = 1578,
  [SMALL_STATE(43)] = 1603,
  [SMALL_STATE(44)] = 1628,
  [SMALL_STATE(45)] = 1653,
  [SMALL_STATE(46)] = 1692,
  [SMALL_STATE(47)] = 1731,
  [SMALL_STATE(48)] = 1770,
  [SMALL_STATE(49)] = 1809,
  [SMALL_STATE(50)] = 1848,
  [SMALL_STATE(51)] = 1887,
  [SMALL_STATE(52)] = 1907,
  [SMALL_STATE(53)] = 1927,
  [SMALL_STATE(54)] = 1953,
  [SMALL_STATE(55)] = 1989,
  [SMALL_STATE(56)] = 2012,
  [SMALL_STATE(57)] = 2034,
  [SMALL_STATE(58)] = 2064,
  [SMALL_STATE(59)] = 2081,
  [SMALL_STATE(60)] = 2098,
  [SMALL_STATE(61)] = 2115,
  [SMALL_STATE(62)] = 2132,
  [SMALL_STATE(63)] = 2149,
  [SMALL_STATE(64)] = 2166,
  [SMALL_STATE(65)] = 2183,
  [SMALL_STATE(66)] = 2200,
  [SMALL_STATE(67)] = 2217,
  [SMALL_STATE(68)] = 2234,
  [SMALL_STATE(69)] = 2251,
  [SMALL_STATE(70)] = 2268,
  [SMALL_STATE(71)] = 2285,
  [SMALL_STATE(72)] = 2302,
  [SMALL_STATE(73)] = 2319,
  [SMALL_STATE(74)] = 2336,
  [SMALL_STATE(75)] = 2353,
  [SMALL_STATE(76)] = 2374,
  [SMALL_STATE(77)] = 2391,
  [SMALL_STATE(78)] = 2408,
  [SMALL_STATE(79)] = 2432,
  [SMALL_STATE(80)] = 2456,
  [SMALL_STATE(81)] = 2480,
  [SMALL_STATE(82)] = 2503,
  [SMALL_STATE(83)] = 2524,
  [SMALL_STATE(84)] = 2546,
  [SMALL_STATE(85)] = 2568,
  [SMALL_STATE(86)] = 2582,
  [SMALL_STATE(87)] = 2596,
  [SMALL_STATE(88)] = 2610,
  [SMALL_STATE(89)] = 2624,
  [SMALL_STATE(90)] = 2638,
  [SMALL_STATE(91)] = 2652,
  [SMALL_STATE(92)] = 2666,
  [SMALL_STATE(93)] = 2680,
  [SMALL_STATE(94)] = 2694,
  [SMALL_STATE(95)] = 2708,
  [SMALL_STATE(96)] = 2722,
  [SMALL_STATE(97)] = 2734,
  [SMALL_STATE(98)] = 2748,
  [SMALL_STATE(99)] = 2762,
  [SMALL_STATE(100)] = 2780,
  [SMALL_STATE(101)] = 2794,
  [SMALL_STATE(102)] = 2813,
  [SMALL_STATE(103)] = 2832,
  [SMALL_STATE(104)] = 2849,
  [SMALL_STATE(105)] = 2866,
  [SMALL_STATE(106)] = 2879,
  [SMALL_STATE(107)] = 2896,
  [SMALL_STATE(108)] = 2915,
  [SMALL_STATE(109)] = 2934,
  [SMALL_STATE(110)] = 2951,
  [SMALL_STATE(111)] = 2970,
  [SMALL_STATE(112)] = 2981,
  [SMALL_STATE(113)] = 3000,
  [SMALL_STATE(114)] = 3017,
  [SMALL_STATE(115)] = 3036,
  [SMALL_STATE(116)] = 3053,
  [SMALL_STATE(117)] = 3070,
  [SMALL_STATE(118)] = 3086,
  [SMALL_STATE(119)] = 3102,
  [SMALL_STATE(120)] = 3118,
  [SMALL_STATE(121)] = 3132,
  [SMALL_STATE(122)] = 3148,
  [SMALL_STATE(123)] = 3162,
  [SMALL_STATE(124)] = 3178,
  [SMALL_STATE(125)] = 3194,
  [SMALL_STATE(126)] = 3208,
  [SMALL_STATE(127)] = 3224,
  [SMALL_STATE(128)] = 3238,
  [SMALL_STATE(129)] = 3254,
  [SMALL_STATE(130)] = 3270,
  [SMALL_STATE(131)] = 3286,
  [SMALL_STATE(132)] = 3302,
  [SMALL_STATE(133)] = 3316,
  [SMALL_STATE(134)] = 3332,
  [SMALL_STATE(135)] = 3346,
  [SMALL_STATE(136)] = 3356,
  [SMALL_STATE(137)] = 3370,
  [SMALL_STATE(138)] = 3383,
  [SMALL_STATE(139)] = 3396,
  [SMALL_STATE(140)] = 3409,
  [SMALL_STATE(141)] = 3422,
  [SMALL_STATE(142)] = 3433,
  [SMALL_STATE(143)] = 3444,
  [SMALL_STATE(144)] = 3457,
  [SMALL_STATE(145)] = 3470,
  [SMALL_STATE(146)] = 3483,
  [SMALL_STATE(147)] = 3496,
  [SMALL_STATE(148)] = 3509,
  [SMALL_STATE(149)] = 3522,
  [SMALL_STATE(150)] = 3535,
  [SMALL_STATE(151)] = 3545,
  [SMALL_STATE(152)] = 3555,
  [SMALL_STATE(153)] = 3565,
  [SMALL_STATE(154)] = 3575,
  [SMALL_STATE(155)] = 3583,
  [SMALL_STATE(156)] = 3593,
  [SMALL_STATE(157)] = 3603,
  [SMALL_STATE(158)] = 3613,
  [SMALL_STATE(159)] = 3621,
  [SMALL_STATE(160)] = 3629,
  [SMALL_STATE(161)] = 3637,
  [SMALL_STATE(162)] = 3645,
  [SMALL_STATE(163)] = 3655,
  [SMALL_STATE(164)] = 3665,
  [SMALL_STATE(165)] = 3675,
  [SMALL_STATE(166)] = 3683,
  [SMALL_STATE(167)] = 3693,
  [SMALL_STATE(168)] = 3703,
  [SMALL_STATE(169)] = 3713,
  [SMALL_STATE(170)] = 3723,
  [SMALL_STATE(171)] = 3733,
  [SMALL_STATE(172)] = 3743,
  [SMALL_STATE(173)] = 3750,
  [SMALL_STATE(174)] = 3757,
  [SMALL_STATE(175)] = 3764,
  [SMALL_STATE(176)] = 3771,
  [SMALL_STATE(177)] = 3778,
  [SMALL_STATE(178)] = 3785,
  [SMALL_STATE(179)] = 3792,
  [SMALL_STATE(180)] = 3799,
  [SMALL_STATE(181)] = 3806,
  [SMALL_STATE(182)] = 3813,
  [SMALL_STATE(183)] = 3820,
  [SMALL_STATE(184)] = 3827,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_type, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_type, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(81),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(166),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(153),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(102),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(155),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(156),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(159),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(15),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_ident, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_ident, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_item, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_item, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_type, 5),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict_type, 5),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_type, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_dict_type, 5),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_dict_type, 5),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_type, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_type, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 5),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 5),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional_type, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 4),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 4),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_type, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_type, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_type, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_type, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_prelude, 3),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_prelude, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_prelude, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_prelude, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_struct, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_struct, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 3),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_repeat1, 2), SHIFT_REPEAT(56),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_repeat1, 2),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2), SHIFT_REPEAT(56),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry_point, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry_point, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_struct, 6),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_struct, 6),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 3),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build, 2),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 3),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_struct, 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_struct, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_struct, 4),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_struct, 4),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 6),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 6),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 5),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 4),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 4),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 4),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 4),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_struct, 5),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_struct, 5),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_repeat1, 2), SHIFT_REPEAT(75),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2), SHIFT_REPEAT(75),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 2),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main, 2),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comma, 1),
  [317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_repeat2, 2), SHIFT_REPEAT(54),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_repeat2, 2),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_repeat2, 2), SHIFT_REPEAT(54),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_field, 5),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 5),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_field, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_field, 1),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comma, 1),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2),
  [347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(106),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(106),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat2, 2),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tuple_struct_repeat1, 2), SHIFT_REPEAT(8),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tuple_struct_repeat1, 2),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_struct_repeat1, 2), SHIFT_REPEAT(8),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility, 1),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_field, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_field, 2),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_field, 4),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 4),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_field, 3),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 3),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2), SHIFT_REPEAT(105),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_repeat1, 2),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_type_repeat1, 2), SHIFT_REPEAT(96),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(125),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [432] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(127),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_visibility, 1),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 3),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat2, 2), SHIFT_REPEAT(140),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat2, 2),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_repeat2, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_struct_repeat1, 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 2),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 4),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fn_modifiers, 1),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 3),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 2),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 5),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 4),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 5),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_modifier, 1),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [528] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_Galvan(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__word,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
