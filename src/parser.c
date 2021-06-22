#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 268
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_LBRACE = 1,
  anon_sym_LF = 2,
  anon_sym_RBRACE = 3,
  anon_sym_EQ = 4,
  anon_sym_QMARK = 5,
  anon_sym_COLON = 6,
  anon_sym_DASH = 7,
  anon_sym_BANG = 8,
  anon_sym_STAR = 9,
  anon_sym_SLASH = 10,
  anon_sym_PERCENT = 11,
  anon_sym_PLUS = 12,
  anon_sym_GT = 13,
  anon_sym_GT_EQ = 14,
  anon_sym_LT = 15,
  anon_sym_LT_EQ = 16,
  anon_sym_EQ_EQ = 17,
  anon_sym_BANG_EQ = 18,
  anon_sym_AMP_AMP = 19,
  anon_sym_PIPE_PIPE = 20,
  anon_sym_LPAREN = 21,
  anon_sym_RPAREN = 22,
  anon_sym_DQUOTE = 23,
  aux_sym_quoted_template_token1 = 24,
  sym_escape_sequence = 25,
  anon_sym_LBRACK = 26,
  anon_sym_RBRACK = 27,
  anon_sym_EQ_GT = 28,
  anon_sym_DOT_DOT_DOT = 29,
  anon_sym_for = 30,
  anon_sym_COMMA = 31,
  anon_sym_in = 32,
  anon_sym_if = 33,
  anon_sym_DOT = 34,
  sym_numeric_literal = 35,
  sym_identifier = 36,
  sym_null = 37,
  sym_true = 38,
  sym_false = 39,
  sym_comment = 40,
  sym_heredoc = 41,
  sym_source_file = 42,
  sym_body = 43,
  sym_block = 44,
  sym_one_line_block = 45,
  sym_attribute = 46,
  sym_expression = 47,
  sym_conditional = 48,
  sym_operation = 49,
  sym_unary_op = 50,
  sym_binary_op = 51,
  sym_expr_term = 52,
  sym_template_expr = 53,
  sym_quoted_template = 54,
  sym_string_literal = 55,
  sym_for_expr = 56,
  sym__for_tuple = 57,
  sym__for_object = 58,
  sym_for_intro = 59,
  sym_for_cond = 60,
  sym_literal_value = 61,
  sym_index = 62,
  sym_get_attr = 63,
  sym_splat = 64,
  sym_splat_attr = 65,
  sym_splat_full = 66,
  sym_collection_value = 67,
  sym_tuple = 68,
  sym_object = 69,
  sym_object_elem = 70,
  sym_variable_expr = 71,
  sym_function_call = 72,
  aux_sym_body_repeat1 = 73,
  aux_sym_block_repeat1 = 74,
  aux_sym_quoted_template_repeat1 = 75,
  aux_sym_splat_attr_repeat1 = 76,
  aux_sym_splat_full_repeat1 = 77,
  aux_sym_tuple_repeat1 = 78,
  aux_sym_object_repeat1 = 79,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_LF] = "\n",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ] = "=",
  [anon_sym_QMARK] = "\?",
  [anon_sym_COLON] = ":",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PLUS] = "+",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_template_token1] = "quoted_template_token1",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_for] = "for",
  [anon_sym_COMMA] = ",",
  [anon_sym_in] = "in",
  [anon_sym_if] = "if",
  [anon_sym_DOT] = ".",
  [sym_numeric_literal] = "numeric_literal",
  [sym_identifier] = "identifier",
  [sym_null] = "null",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_comment] = "comment",
  [sym_heredoc] = "heredoc",
  [sym_source_file] = "source_file",
  [sym_body] = "body",
  [sym_block] = "block",
  [sym_one_line_block] = "one_line_block",
  [sym_attribute] = "attribute",
  [sym_expression] = "expression",
  [sym_conditional] = "conditional",
  [sym_operation] = "operation",
  [sym_unary_op] = "unary_op",
  [sym_binary_op] = "binary_op",
  [sym_expr_term] = "expr_term",
  [sym_template_expr] = "template_expr",
  [sym_quoted_template] = "quoted_template",
  [sym_string_literal] = "string_literal",
  [sym_for_expr] = "for_expr",
  [sym__for_tuple] = "_for_tuple",
  [sym__for_object] = "_for_object",
  [sym_for_intro] = "for_intro",
  [sym_for_cond] = "for_cond",
  [sym_literal_value] = "literal_value",
  [sym_index] = "index",
  [sym_get_attr] = "get_attr",
  [sym_splat] = "splat",
  [sym_splat_attr] = "splat_attr",
  [sym_splat_full] = "splat_full",
  [sym_collection_value] = "collection_value",
  [sym_tuple] = "tuple",
  [sym_object] = "object",
  [sym_object_elem] = "object_elem",
  [sym_variable_expr] = "variable_expr",
  [sym_function_call] = "function_call",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_quoted_template_repeat1] = "quoted_template_repeat1",
  [aux_sym_splat_attr_repeat1] = "splat_attr_repeat1",
  [aux_sym_splat_full_repeat1] = "splat_full_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_template_token1] = aux_sym_quoted_template_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_numeric_literal] = sym_numeric_literal,
  [sym_identifier] = sym_identifier,
  [sym_null] = sym_null,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_comment] = sym_comment,
  [sym_heredoc] = sym_heredoc,
  [sym_source_file] = sym_source_file,
  [sym_body] = sym_body,
  [sym_block] = sym_block,
  [sym_one_line_block] = sym_one_line_block,
  [sym_attribute] = sym_attribute,
  [sym_expression] = sym_expression,
  [sym_conditional] = sym_conditional,
  [sym_operation] = sym_operation,
  [sym_unary_op] = sym_unary_op,
  [sym_binary_op] = sym_binary_op,
  [sym_expr_term] = sym_expr_term,
  [sym_template_expr] = sym_template_expr,
  [sym_quoted_template] = sym_quoted_template,
  [sym_string_literal] = sym_string_literal,
  [sym_for_expr] = sym_for_expr,
  [sym__for_tuple] = sym__for_tuple,
  [sym__for_object] = sym__for_object,
  [sym_for_intro] = sym_for_intro,
  [sym_for_cond] = sym_for_cond,
  [sym_literal_value] = sym_literal_value,
  [sym_index] = sym_index,
  [sym_get_attr] = sym_get_attr,
  [sym_splat] = sym_splat,
  [sym_splat_attr] = sym_splat_attr,
  [sym_splat_full] = sym_splat_full,
  [sym_collection_value] = sym_collection_value,
  [sym_tuple] = sym_tuple,
  [sym_object] = sym_object,
  [sym_object_elem] = sym_object_elem,
  [sym_variable_expr] = sym_variable_expr,
  [sym_function_call] = sym_function_call,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_quoted_template_repeat1] = aux_sym_quoted_template_repeat1,
  [aux_sym_splat_attr_repeat1] = aux_sym_splat_attr_repeat1,
  [aux_sym_splat_full_repeat1] = aux_sym_splat_full_repeat1,
  [aux_sym_tuple_repeat1] = aux_sym_tuple_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_template_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_numeric_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_one_line_block] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional] = {
    .visible = true,
    .named = true,
  },
  [sym_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_op] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_op] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_term] = {
    .visible = true,
    .named = true,
  },
  [sym_template_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_template] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_for_expr] = {
    .visible = true,
    .named = true,
  },
  [sym__for_tuple] = {
    .visible = false,
    .named = true,
  },
  [sym__for_object] = {
    .visible = false,
    .named = true,
  },
  [sym_for_intro] = {
    .visible = true,
    .named = true,
  },
  [sym_for_cond] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_value] = {
    .visible = true,
    .named = true,
  },
  [sym_index] = {
    .visible = true,
    .named = true,
  },
  [sym_get_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_splat] = {
    .visible = true,
    .named = true,
  },
  [sym_splat_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_splat_full] = {
    .visible = true,
    .named = true,
  },
  [sym_collection_value] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_object_elem] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_template_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_splat_attr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_splat_full_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_left = 1,
  field_operator = 2,
  field_right = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 6688
    ? (c < 2984
      ? (c < 2365
        ? (c < 1376
          ? (c < 880
            ? (c < 192
              ? (c < 170
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= 'z')))
                : (c <= 170 || (c < 186
                  ? c == 181
                  : c <= 186)))
              : (c <= 214 || (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))))
            : (c <= 884 || (c < 910
              ? (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))
              : (c <= 929 || (c < 1162
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : c <= 1153)
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2208
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2228 || (c < 2308
                  ? (c >= 2230 && c <= 2247)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2544
            ? (c < 2474
              ? (c < 2437
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : c <= 2472)))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2654
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)
                : (c <= 2654 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2869
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2958
              ? (c < 2929
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2929 || (c < 2949
                  ? c == 2947
                  : c <= 2954)))
              : (c <= 2960 || (c < 2972
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 4186
        ? (c < 3450
          ? (c < 3242
            ? (c < 3133
              ? (c < 3086
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)))
              : (c <= 3133 || (c < 3205
                ? (c < 3168
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3169 || c == 3200))
                : (c <= 3212 || (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : c <= 3240)))))
            : (c <= 3251 || (c < 3342
              ? (c < 3296
                ? (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : (c <= 3261 || c == 3294))
                : (c <= 3297 || (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)))
              : (c <= 3344 || (c < 3406
                ? (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)
                : (c <= 3406 || (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : c <= 3425)))))))
          : (c <= 3455 || (c < 3751
            ? (c < 3634
              ? (c < 3517
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : c <= 3632)))
              : (c <= 3635 || (c < 3718
                ? (c < 3713
                  ? (c >= 3648 && c <= 3654)
                  : (c <= 3714 || c == 3716))
                : (c <= 3722 || (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : c <= 3749)))))
            : (c <= 3760 || (c < 3904
              ? (c < 3782
                ? (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))
                : (c <= 3782 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))
              : (c <= 3911 || (c < 4096
                ? (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)
                : (c <= 4138 || (c < 4176
                  ? c == 4159
                  : c <= 4181)))))))))
        : (c <= 4189 || (c < 5024
          ? (c < 4698
            ? (c < 4295
              ? (c < 4213
                ? (c < 4197
                  ? c == 4193
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))
                : (c <= 4225 || (c < 4256
                  ? c == 4238
                  : c <= 4293)))
              : (c <= 4295 || (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))))
            : (c <= 4701 || (c < 4802
              ? (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))
              : (c <= 4805 || (c < 4882
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)
                : (c <= 4885 || (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : c <= 5007)))))))
          : (c <= 5109 || (c < 6103
            ? (c < 5888
              ? (c < 5761
                ? (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))
                : (c <= 5786 || (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : c <= 5880)))
              : (c <= 5900 || (c < 5984
                ? (c < 5920
                  ? (c >= 5902 && c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? c == 6108
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6528
                ? (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)
                : (c <= 6571 || (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43259
      ? (c < 11264
        ? (c < 8064
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6987)))
                : (c <= 7072 || (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : c <= 7141)))
              : (c <= 7203 || (c < 7312
                ? (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8027
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8160
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))
              : (c <= 8172 || (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8490
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))
              : (c <= 8493 || (c < 8517
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)
                : (c <= 8521 || (c < 8579
                  ? c == 8526
                  : c <= 8580)))))))))
        : (c <= 11310 || (c < 12549
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11360
                  ? (c >= 11312 && c <= 11358)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : c <= 11559)))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : c <= 12294)))
              : (c <= 12341 || (c < 12445
                ? (c < 12353
                  ? (c >= 12347 && c <= 12348)
                  : c <= 12438)
                : (c <= 12447 || (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : c <= 12543)))))))
          : (c <= 12591 || (c < 42623
            ? (c < 40956
              ? (c < 13312
                ? (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 13312 || (c < 19968
                  ? c == 19903
                  : c <= 19968)))
              : (c <= 40956 || (c < 42512
                ? (c < 42192
                  ? (c >= 40960 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42527 || (c < 42560
                  ? (c >= 42538 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 43011
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42943 || (c < 42997
                  ? (c >= 42946 && c <= 42954)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67828
            ? (c < 67639
              ? (c < 67584
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))
                : (c <= 67589 || (c < 67594
                  ? c == 67592
                  : c <= 67637)))
              : (c <= 67640 || (c < 67680
                ? (c < 67647
                  ? c == 67644
                  : c <= 67669)
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2230
        ? (c < 1329
          ? (c < 736
            ? (c < 170
              ? (c < 'g'
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= 'e')))
                : (c <= 'm' || (c < 'u'
                  ? (c >= 'o' && c <= 's')
                  : c <= 'z')))
              : (c <= 170 || (c < 216
                ? (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 902
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1810
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)))
              : (c <= 1747 || (c < 1786
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2074
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)))))))))
        : (c <= 2247 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3168
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? c == 3294
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 5998
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5920
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5900 || (c >= 5902 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6987)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < '_'
                ? (c < '0'
                  ? c == '-'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < 170
                  ? (c >= 'a' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2230
        ? (c < 1329
          ? (c < 736
            ? (c < 170
              ? (c < '_'
                ? (c < '0'
                  ? c == '-'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < 'p'
                  ? (c >= 'b' && c <= 'n')
                  : c <= 'z')))
              : (c <= 170 || (c < 216
                ? (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 902
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1810
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)))
              : (c <= 1747 || (c < 1786
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2074
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)))))))))
        : (c <= 2247 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3168
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? c == 3294
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 5998
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5920
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5900 || (c >= 5902 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6987)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_5(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2230
        ? (c < 1329
          ? (c < 736
            ? (c < 170
              ? (c < '_'
                ? (c < '0'
                  ? c == '-'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < 'f'
                  ? (c >= 'a' && c <= 'd')
                  : c <= 'z')))
              : (c <= 170 || (c < 216
                ? (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 902
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1810
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)))
              : (c <= 1747 || (c < 1786
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2074
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)))))))))
        : (c <= 2247 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3168
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? c == 3294
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 5998
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5920
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5900 || (c >= 5902 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6987)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_6(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2230
        ? (c < 1329
          ? (c < 736
            ? (c < 170
              ? (c < '_'
                ? (c < '0'
                  ? c == '-'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < 'm'
                  ? (c >= 'a' && c <= 'k')
                  : c <= 'z')))
              : (c <= 170 || (c < 216
                ? (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 902
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1810
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)))
              : (c <= 1747 || (c < 1786
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2074
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)))))))))
        : (c <= 2247 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3168
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? c == 3294
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 5998
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5920
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5900 || (c >= 5902 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6987)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_7(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2230
        ? (c < 1329
          ? (c < 736
            ? (c < 170
              ? (c < '_'
                ? (c < '0'
                  ? c == '-'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < 's'
                  ? (c >= 'a' && c <= 'q')
                  : c <= 'z')))
              : (c <= 170 || (c < 216
                ? (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 902
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1810
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)))
              : (c <= 1747 || (c < 1786
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2074
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)))))))))
        : (c <= 2247 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3168
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? c == 3294
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 5998
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5920
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5900 || (c >= 5902 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6987)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_8(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2230
        ? (c < 1329
          ? (c < 736
            ? (c < 170
              ? (c < '_'
                ? (c < '0'
                  ? c == '-'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < 't'
                  ? (c >= 'a' && c <= 'r')
                  : c <= 'z')))
              : (c <= 170 || (c < 216
                ? (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 902
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1810
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)))
              : (c <= 1747 || (c < 1786
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2074
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)))))))))
        : (c <= 2247 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3168
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? c == 3294
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 5998
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5920
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5900 || (c >= 5902 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6987)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_9(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2230
        ? (c < 1329
          ? (c < 736
            ? (c < 170
              ? (c < '_'
                ? (c < '0'
                  ? c == '-'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < 'v'
                  ? (c >= 'a' && c <= 't')
                  : c <= 'z')))
              : (c <= 170 || (c < 216
                ? (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 902
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1810
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)))
              : (c <= 1747 || (c < 1786
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2074
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)))))))))
        : (c <= 2247 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3168
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? c == 3294
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 5998
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5920
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5900 || (c >= 5902 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6987)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_10(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < '_'
                ? (c < '0'
                  ? c == '-'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < 170
                  ? (c >= 'b' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(45);
      if (lookahead == '!') ADVANCE(56);
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '%') ADVANCE(59);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(61);
      if (lookahead == '?') ADVANCE(52);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(47);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '%') ADVANCE(59);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(61);
      if (lookahead == '?') ADVANCE(52);
      if (lookahead == '[') ADVANCE(80);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(106);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '%') ADVANCE(59);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == '>') ADVANCE(61);
      if (lookahead == '?') ADVANCE(52);
      if (lookahead == '[') ADVANCE(80);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(106);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '%') ADVANCE(59);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(61);
      if (lookahead == '?') ADVANCE(52);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '%') ADVANCE(59);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(61);
      if (lookahead == '?') ADVANCE(52);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(55);
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == ']') ADVANCE(81);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(106);
      if (lookahead == 'f') ADVANCE(105);
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead == 't') ADVANCE(101);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(55);
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == ']') ADVANCE(81);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(106);
      if (lookahead == 'f') ADVANCE(94);
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead == 't') ADVANCE(101);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '&') ADVANCE(67);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(114);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(83);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(66);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(65);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == '>') ADVANCE(82);
      END_STATE();
    case 17:
      if (lookahead == 'U') ADVANCE(42);
      if (lookahead == 'u') ADVANCE(38);
      if (lookahead == 'x') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(88);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 31:
      if (lookahead == '|') ADVANCE(68);
      END_STATE();
    case 32:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 43:
      if (eof) ADVANCE(45);
      if (lookahead == '!') ADVANCE(56);
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '%') ADVANCE(59);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(61);
      if (lookahead == '?') ADVANCE(52);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 44:
      if (eof) ADVANCE(45);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '%') ADVANCE(59);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(61);
      if (lookahead == '?') ADVANCE(52);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == ']') ADVANCE(81);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(106);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      END_STATE();
    case 45:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(65);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == '>') ADVANCE(82);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(66);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(114);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_quoted_template_token1);
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(76);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_quoted_template_token1);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_quoted_template_token1);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_quoted_template_token1);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_quoted_template_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(106);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(13);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(106);
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(106);
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(106);
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(106);
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(106);
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(106);
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(106);
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(106);
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(106);
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(106);
      if (lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(106);
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(106);
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_null);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(106);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_true);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(106);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_false);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(106);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(114);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 44},
  [2] = {.lex_state = 7, .external_lex_state = 1},
  [3] = {.lex_state = 7, .external_lex_state = 1},
  [4] = {.lex_state = 7, .external_lex_state = 1},
  [5] = {.lex_state = 7, .external_lex_state = 1},
  [6] = {.lex_state = 6, .external_lex_state = 1},
  [7] = {.lex_state = 6, .external_lex_state = 1},
  [8] = {.lex_state = 6, .external_lex_state = 1},
  [9] = {.lex_state = 6, .external_lex_state = 1},
  [10] = {.lex_state = 6, .external_lex_state = 1},
  [11] = {.lex_state = 6, .external_lex_state = 1},
  [12] = {.lex_state = 6, .external_lex_state = 1},
  [13] = {.lex_state = 6, .external_lex_state = 1},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 6, .external_lex_state = 1},
  [16] = {.lex_state = 6, .external_lex_state = 1},
  [17] = {.lex_state = 6, .external_lex_state = 1},
  [18] = {.lex_state = 6, .external_lex_state = 1},
  [19] = {.lex_state = 6, .external_lex_state = 1},
  [20] = {.lex_state = 6, .external_lex_state = 1},
  [21] = {.lex_state = 6, .external_lex_state = 1},
  [22] = {.lex_state = 6, .external_lex_state = 1},
  [23] = {.lex_state = 6, .external_lex_state = 1},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 6, .external_lex_state = 1},
  [26] = {.lex_state = 6, .external_lex_state = 1},
  [27] = {.lex_state = 6, .external_lex_state = 1},
  [28] = {.lex_state = 6, .external_lex_state = 1},
  [29] = {.lex_state = 6, .external_lex_state = 1},
  [30] = {.lex_state = 6, .external_lex_state = 1},
  [31] = {.lex_state = 6, .external_lex_state = 1},
  [32] = {.lex_state = 6, .external_lex_state = 1},
  [33] = {.lex_state = 6, .external_lex_state = 1},
  [34] = {.lex_state = 6, .external_lex_state = 1},
  [35] = {.lex_state = 6, .external_lex_state = 1},
  [36] = {.lex_state = 6, .external_lex_state = 1},
  [37] = {.lex_state = 6, .external_lex_state = 1},
  [38] = {.lex_state = 6, .external_lex_state = 1},
  [39] = {.lex_state = 6, .external_lex_state = 1},
  [40] = {.lex_state = 6, .external_lex_state = 1},
  [41] = {.lex_state = 6, .external_lex_state = 1},
  [42] = {.lex_state = 6, .external_lex_state = 1},
  [43] = {.lex_state = 6, .external_lex_state = 1},
  [44] = {.lex_state = 6, .external_lex_state = 1},
  [45] = {.lex_state = 6, .external_lex_state = 1},
  [46] = {.lex_state = 6, .external_lex_state = 1},
  [47] = {.lex_state = 6, .external_lex_state = 1},
  [48] = {.lex_state = 6, .external_lex_state = 1},
  [49] = {.lex_state = 6, .external_lex_state = 1},
  [50] = {.lex_state = 6, .external_lex_state = 1},
  [51] = {.lex_state = 6, .external_lex_state = 1},
  [52] = {.lex_state = 6, .external_lex_state = 1},
  [53] = {.lex_state = 6, .external_lex_state = 1},
  [54] = {.lex_state = 6, .external_lex_state = 1},
  [55] = {.lex_state = 6, .external_lex_state = 1},
  [56] = {.lex_state = 6, .external_lex_state = 1},
  [57] = {.lex_state = 6, .external_lex_state = 1},
  [58] = {.lex_state = 6, .external_lex_state = 1},
  [59] = {.lex_state = 6, .external_lex_state = 1},
  [60] = {.lex_state = 6, .external_lex_state = 1},
  [61] = {.lex_state = 6, .external_lex_state = 1},
  [62] = {.lex_state = 6, .external_lex_state = 1},
  [63] = {.lex_state = 6, .external_lex_state = 1},
  [64] = {.lex_state = 6, .external_lex_state = 1},
  [65] = {.lex_state = 6, .external_lex_state = 1},
  [66] = {.lex_state = 6, .external_lex_state = 1},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 44},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 44},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 44},
  [108] = {.lex_state = 44},
  [109] = {.lex_state = 6, .external_lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 6, .external_lex_state = 1},
  [112] = {.lex_state = 6, .external_lex_state = 1},
  [113] = {.lex_state = 44},
  [114] = {.lex_state = 44},
  [115] = {.lex_state = 44},
  [116] = {.lex_state = 44},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 44},
  [127] = {.lex_state = 44},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 44},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 44},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 44},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 44},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 44},
  [174] = {.lex_state = 44},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 44},
  [177] = {.lex_state = 5},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 44},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 44},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 44},
  [188] = {.lex_state = 44},
  [189] = {.lex_state = 44},
  [190] = {.lex_state = 44},
  [191] = {.lex_state = 44},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 44},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 44},
  [197] = {.lex_state = 6, .external_lex_state = 1},
  [198] = {.lex_state = 6, .external_lex_state = 1},
  [199] = {.lex_state = 44},
  [200] = {.lex_state = 3},
  [201] = {.lex_state = 44},
  [202] = {.lex_state = 44},
  [203] = {.lex_state = 44},
  [204] = {.lex_state = 44},
  [205] = {.lex_state = 44},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 2},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 2},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 2},
  [212] = {.lex_state = 2},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 2},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 44},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 44},
  [222] = {.lex_state = 44},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 44},
  [229] = {.lex_state = 44},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 44},
  [232] = {.lex_state = 1},
  [233] = {.lex_state = 44},
  [234] = {.lex_state = 44},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 44},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 44},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 1},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 44},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 1},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 44},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 7},
  [254] = {.lex_state = 44},
  [255] = {.lex_state = 44},
  [256] = {.lex_state = 1},
  [257] = {.lex_state = 1},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 7},
  [264] = {.lex_state = 1},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 1},
  [267] = {.lex_state = 0},
};

enum {
  ts_external_token_heredoc = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_heredoc] = sym_heredoc,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_heredoc] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_numeric_literal] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_heredoc] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(267),
    [sym_body] = STATE(265),
    [sym_block] = STATE(201),
    [sym_one_line_block] = STATE(201),
    [sym_attribute] = STATE(201),
    [aux_sym_body_repeat1] = STATE(201),
    [sym_identifier] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_for,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(27), 1,
      sym_heredoc,
    STATE(14), 1,
      sym_expr_term,
    STATE(43), 1,
      sym_for_intro,
    STATE(77), 1,
      sym_quoted_template,
    STATE(172), 1,
      sym_expression,
    STATE(223), 1,
      sym_object_elem,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [79] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_for,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_expr_term,
    STATE(52), 1,
      sym_for_intro,
    STATE(77), 1,
      sym_quoted_template,
    STATE(172), 1,
      sym_expression,
    STATE(218), 1,
      sym_object_elem,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [158] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_for,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(31), 1,
      anon_sym_RBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(39), 1,
      sym_for_intro,
    STATE(77), 1,
      sym_quoted_template,
    STATE(141), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [234] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_for,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_RBRACK,
    STATE(14), 1,
      sym_expr_term,
    STATE(47), 1,
      sym_for_intro,
    STATE(77), 1,
      sym_quoted_template,
    STATE(152), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [310] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(172), 1,
      sym_expression,
    STATE(235), 1,
      sym_object_elem,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [383] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(172), 1,
      sym_expression,
    STATE(235), 1,
      sym_object_elem,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [456] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(172), 1,
      sym_expression,
    STATE(235), 1,
      sym_object_elem,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [529] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(172), 1,
      sym_expression,
    STATE(235), 1,
      sym_object_elem,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [602] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(135), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [672] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(27), 1,
      sym_heredoc,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(172), 1,
      sym_expression,
    STATE(235), 1,
      sym_object_elem,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [742] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(135), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [812] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(127), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [882] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_DOT,
    STATE(89), 2,
      sym_splat_attr,
      sym_splat_full,
    STATE(92), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(53), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(51), 19,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [928] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_RBRACK,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(135), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [998] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_RBRACK,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(135), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1068] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_STAR,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(193), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1138] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_RBRACK,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(135), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1208] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(135), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1278] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(69), 1,
      anon_sym_STAR,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(189), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1348] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(135), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1418] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(126), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1488] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(135), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1558] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_DOT,
    STATE(89), 2,
      sym_splat_attr,
      sym_splat_full,
    STATE(92), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(79), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 19,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [1604] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      sym_numeric_literal,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(97), 1,
      sym_heredoc,
    STATE(110), 1,
      sym_expr_term,
    STATE(169), 1,
      sym_quoted_template,
    STATE(180), 1,
      sym_expression,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(159), 2,
      sym_tuple,
      sym_object,
    STATE(160), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(175), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(194), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(95), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(161), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1671] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      sym_numeric_literal,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(97), 1,
      sym_heredoc,
    STATE(110), 1,
      sym_expr_term,
    STATE(169), 1,
      sym_quoted_template,
    STATE(178), 1,
      sym_expression,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(159), 2,
      sym_tuple,
      sym_object,
    STATE(160), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(175), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(194), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(95), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(161), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1738] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(107), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1805] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(128), 1,
      sym_expression,
    ACTIONS(99), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1872] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(103), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [1939] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(108), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2006] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(114), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2073] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      sym_numeric_literal,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(97), 1,
      sym_heredoc,
    STATE(110), 1,
      sym_expr_term,
    STATE(169), 1,
      sym_quoted_template,
    STATE(192), 1,
      sym_expression,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(159), 2,
      sym_tuple,
      sym_object,
    STATE(160), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(175), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(194), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(95), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(161), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2140] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(129), 1,
      sym_expression,
    ACTIONS(99), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2207] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(131), 1,
      sym_expression,
    ACTIONS(99), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2274] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(133), 1,
      sym_expression,
    ACTIONS(99), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2341] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(103), 1,
      sym_expression,
    ACTIONS(99), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2408] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(134), 1,
      sym_expression,
    ACTIONS(99), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2475] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(174), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2542] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(148), 1,
      sym_expression,
    ACTIONS(99), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2609] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(173), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2676] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(183), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2743] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(188), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2810] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(195), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2877] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(193), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [2944] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(136), 1,
      sym_expression,
    ACTIONS(99), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3011] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(130), 1,
      sym_expression,
    ACTIONS(99), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3078] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(170), 1,
      sym_expression,
    ACTIONS(99), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3145] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(187), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3212] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(176), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3279] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(191), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3346] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      sym_numeric_literal,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(97), 1,
      sym_heredoc,
    STATE(110), 1,
      sym_expr_term,
    STATE(169), 1,
      sym_quoted_template,
    STATE(179), 1,
      sym_expression,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(159), 2,
      sym_tuple,
      sym_object,
    STATE(160), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(175), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(194), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(95), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(161), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3413] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(177), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3480] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      sym_numeric_literal,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(97), 1,
      sym_heredoc,
    STATE(110), 1,
      sym_expr_term,
    STATE(169), 1,
      sym_quoted_template,
    STATE(182), 1,
      sym_expression,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(159), 2,
      sym_tuple,
      sym_object,
    STATE(160), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(175), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(194), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(95), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(161), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3547] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      sym_numeric_literal,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(97), 1,
      sym_heredoc,
    STATE(110), 1,
      sym_expr_term,
    STATE(169), 1,
      sym_quoted_template,
    STATE(184), 1,
      sym_expression,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(159), 2,
      sym_tuple,
      sym_object,
    STATE(160), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(175), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(194), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(95), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(161), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3614] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      sym_numeric_literal,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(97), 1,
      sym_heredoc,
    STATE(110), 1,
      sym_expr_term,
    STATE(169), 1,
      sym_quoted_template,
    STATE(186), 1,
      sym_expression,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(159), 2,
      sym_tuple,
      sym_object,
    STATE(160), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(175), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(194), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(95), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(161), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3681] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(113), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3748] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(115), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3815] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(135), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3882] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(190), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [3949] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(137), 1,
      sym_expression,
    ACTIONS(99), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [4016] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(196), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [4083] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(189), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [4150] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      sym_numeric_literal,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(97), 1,
      sym_heredoc,
    STATE(110), 1,
      sym_expr_term,
    STATE(169), 1,
      sym_quoted_template,
    STATE(185), 1,
      sym_expression,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(159), 2,
      sym_tuple,
      sym_object,
    STATE(160), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(175), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(194), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(95), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(161), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [4217] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(181), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [4284] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(171), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [4351] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(116), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    STATE(104), 2,
      sym_unary_op,
      sym_binary_op,
    STATE(105), 2,
      sym_conditional,
      sym_operation,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [4418] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LBRACK,
    ACTIONS(110), 1,
      anon_sym_DOT,
    STATE(67), 3,
      sym_index,
      sym_get_attr,
      aux_sym_splat_full_repeat1,
    ACTIONS(105), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(103), 19,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [4460] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    ACTIONS(119), 1,
      anon_sym_DOT,
    STATE(67), 3,
      sym_index,
      sym_get_attr,
      aux_sym_splat_full_repeat1,
    ACTIONS(115), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(113), 19,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [4502] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    ACTIONS(119), 1,
      anon_sym_DOT,
    STATE(68), 3,
      sym_index,
      sym_get_attr,
      aux_sym_splat_full_repeat1,
    ACTIONS(123), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(121), 19,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [4544] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_DOT,
    STATE(70), 2,
      sym_get_attr,
      aux_sym_splat_attr_repeat1,
    ACTIONS(127), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(125), 20,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [4583] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 5,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(132), 22,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      sym_identifier,
  [4618] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_DOT,
    STATE(70), 2,
      sym_get_attr,
      aux_sym_splat_attr_repeat1,
    ACTIONS(138), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(136), 20,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [4657] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 5,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(140), 22,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      sym_identifier,
  [4692] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_DOT,
    STATE(72), 2,
      sym_get_attr,
      aux_sym_splat_attr_repeat1,
    ACTIONS(146), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(144), 20,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [4731] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(150), 5,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(148), 20,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [4767] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 5,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(154), 20,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [4800] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 5,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(158), 20,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [4833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 5,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(162), 20,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [4866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 5,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(166), 20,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [4899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 5,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(170), 20,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [4932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 5,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(174), 20,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [4965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 5,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(178), 20,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [4998] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 5,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(182), 20,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [5031] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 5,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(186), 20,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [5064] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 5,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(190), 20,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [5097] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 5,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(194), 20,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [5130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 5,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(198), 20,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [5163] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 5,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(202), 20,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [5196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 5,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(206), 20,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [5229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 5,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(210), 20,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [5262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 5,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(214), 20,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [5295] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 5,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(218), 20,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [5328] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 5,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(222), 20,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [5361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 5,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(226), 20,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [5394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 5,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(230), 20,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [5427] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 5,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(234), 20,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [5460] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 5,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(238), 20,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [5493] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 5,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(242), 20,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [5526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 5,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(246), 20,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [5559] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 5,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(250), 20,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [5592] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 5,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(254), 20,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [5625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 5,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(258), 20,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [5658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(262), 19,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [5689] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(266), 19,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [5720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(51), 19,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_if,
  [5751] = 7,
    ACTIONS(77), 1,
      anon_sym_LF,
    ACTIONS(270), 1,
      anon_sym_LBRACK,
    ACTIONS(272), 1,
      anon_sym_DOT,
    ACTIONS(274), 1,
      sym_comment,
    STATE(138), 2,
      sym_splat_attr,
      sym_splat_full,
    STATE(150), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(79), 14,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5789] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(264), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(262), 14,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
  [5825] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(264), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(262), 16,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
  [5859] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      sym_numeric_literal,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(97), 1,
      sym_heredoc,
    STATE(106), 1,
      sym_expr_term,
    STATE(169), 1,
      sym_quoted_template,
    STATE(159), 2,
      sym_tuple,
      sym_object,
    STATE(160), 2,
      sym__for_tuple,
      sym__for_object,
    ACTIONS(95), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(161), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [5911] = 7,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(270), 1,
      anon_sym_LBRACK,
    ACTIONS(272), 1,
      anon_sym_DOT,
    ACTIONS(274), 1,
      sym_comment,
    STATE(138), 2,
      sym_splat_attr,
      sym_splat_full,
    STATE(150), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(53), 14,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5949] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [6001] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_numeric_literal,
    ACTIONS(27), 1,
      sym_heredoc,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(24), 1,
      sym_expr_term,
    STATE(77), 1,
      sym_quoted_template,
    STATE(99), 2,
      sym_tuple,
      sym_object,
    STATE(100), 2,
      sym__for_tuple,
      sym__for_object,
    ACTIONS(25), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(101), 6,
      sym_template_expr,
      sym_for_expr,
      sym_literal_value,
      sym_collection_value,
      sym_variable_expr,
      sym_function_call,
  [6053] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_EQ,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(286), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(262), 10,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
  [6095] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    ACTIONS(290), 1,
      anon_sym_EQ,
    ACTIONS(292), 1,
      anon_sym_AMP_AMP,
    ACTIONS(294), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(286), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(288), 8,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
  [6141] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_EQ,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    ACTIONS(292), 1,
      anon_sym_AMP_AMP,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(286), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(262), 9,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
  [6185] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_EQ,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(262), 12,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
  [6225] = 6,
    ACTIONS(103), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LBRACK,
    ACTIONS(299), 1,
      anon_sym_DOT,
    STATE(117), 3,
      sym_index,
      sym_get_attr,
      aux_sym_splat_full_repeat1,
    ACTIONS(105), 14,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6259] = 6,
    ACTIONS(113), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_LBRACK,
    ACTIONS(304), 1,
      anon_sym_DOT,
    STATE(117), 3,
      sym_index,
      sym_get_attr,
      aux_sym_splat_full_repeat1,
    ACTIONS(115), 14,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6293] = 6,
    ACTIONS(121), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_LBRACK,
    ACTIONS(304), 1,
      anon_sym_DOT,
    STATE(118), 3,
      sym_index,
      sym_get_attr,
      aux_sym_splat_full_repeat1,
    ACTIONS(123), 14,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 4,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(140), 16,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [6355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 4,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
    ACTIONS(132), 16,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [6383] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_EQ,
    ACTIONS(308), 1,
      anon_sym_COLON,
    ACTIONS(150), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(148), 13,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [6416] = 5,
    ACTIONS(144), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_DOT,
    STATE(124), 2,
      sym_get_attr,
      aux_sym_splat_attr_repeat1,
    ACTIONS(146), 15,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
  [6447] = 5,
    ACTIONS(136), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_DOT,
    STATE(125), 2,
      sym_get_attr,
      aux_sym_splat_attr_repeat1,
    ACTIONS(138), 15,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
  [6478] = 5,
    ACTIONS(125), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_DOT,
    STATE(125), 2,
      sym_get_attr,
      aux_sym_splat_attr_repeat1,
    ACTIONS(127), 15,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
  [6509] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    ACTIONS(292), 1,
      anon_sym_AMP_AMP,
    ACTIONS(294), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(313), 1,
      anon_sym_QMARK,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    ACTIONS(317), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    STATE(210), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(286), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [6557] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    ACTIONS(292), 1,
      anon_sym_AMP_AMP,
    ACTIONS(294), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(313), 1,
      anon_sym_QMARK,
    ACTIONS(321), 1,
      anon_sym_RPAREN,
    ACTIONS(323), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(325), 1,
      anon_sym_COMMA,
    STATE(208), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(286), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [6605] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_SLASH,
    ACTIONS(339), 1,
      anon_sym_AMP_AMP,
    ACTIONS(327), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(329), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(333), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(335), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(337), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(262), 6,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [6643] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_SLASH,
    ACTIONS(327), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(329), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(333), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(335), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(337), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(262), 7,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [6679] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_SLASH,
    ACTIONS(339), 1,
      anon_sym_AMP_AMP,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    ACTIONS(343), 1,
      anon_sym_QMARK,
    ACTIONS(345), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(347), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(349), 1,
      anon_sym_if,
    STATE(262), 1,
      sym_for_cond,
    ACTIONS(327), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(329), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(333), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(335), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(337), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [6727] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_SLASH,
    ACTIONS(327), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(329), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(333), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(335), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(262), 9,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [6761] = 4,
    ACTIONS(148), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    ACTIONS(150), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [6789] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_SLASH,
    ACTIONS(264), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(327), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(329), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(262), 11,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [6821] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_SLASH,
    ACTIONS(264), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(329), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(262), 13,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [6851] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    ACTIONS(292), 1,
      anon_sym_AMP_AMP,
    ACTIONS(294), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(313), 1,
      anon_sym_QMARK,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(286), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(353), 4,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_COMMA,
  [6893] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_SLASH,
    ACTIONS(339), 1,
      anon_sym_AMP_AMP,
    ACTIONS(343), 1,
      anon_sym_QMARK,
    ACTIONS(345), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(349), 1,
      anon_sym_if,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
    ACTIONS(357), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(239), 1,
      sym_for_cond,
    ACTIONS(327), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(329), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(333), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(335), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(337), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [6941] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_SLASH,
    ACTIONS(339), 1,
      anon_sym_AMP_AMP,
    ACTIONS(345), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(327), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(329), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(333), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(335), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(337), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(288), 5,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [6981] = 3,
    ACTIONS(206), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(208), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7006] = 3,
    ACTIONS(174), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(176), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7031] = 3,
    ACTIONS(194), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(196), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7056] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    ACTIONS(292), 1,
      anon_sym_AMP_AMP,
    ACTIONS(294), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(313), 1,
      anon_sym_QMARK,
    ACTIONS(359), 1,
      anon_sym_RBRACK,
    ACTIONS(361), 1,
      anon_sym_COMMA,
    STATE(224), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(286), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [7101] = 3,
    ACTIONS(202), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(204), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7126] = 3,
    ACTIONS(198), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(200), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7151] = 3,
    ACTIONS(154), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(156), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7176] = 3,
    ACTIONS(166), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(168), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7201] = 3,
    ACTIONS(186), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(188), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7226] = 3,
    ACTIONS(182), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(184), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7251] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_SLASH,
    ACTIONS(339), 1,
      anon_sym_AMP_AMP,
    ACTIONS(343), 1,
      anon_sym_QMARK,
    ACTIONS(345), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(349), 1,
      anon_sym_if,
    ACTIONS(363), 1,
      anon_sym_RBRACK,
    STATE(249), 1,
      sym_for_cond,
    ACTIONS(327), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(329), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(333), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(335), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(337), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [7296] = 3,
    ACTIONS(162), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(164), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7321] = 3,
    ACTIONS(218), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(220), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7346] = 3,
    ACTIONS(258), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(260), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7371] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    ACTIONS(292), 1,
      anon_sym_AMP_AMP,
    ACTIONS(294), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(313), 1,
      anon_sym_QMARK,
    ACTIONS(365), 1,
      anon_sym_RBRACK,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    STATE(219), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(286), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [7416] = 3,
    ACTIONS(190), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(192), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7441] = 3,
    ACTIONS(178), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(180), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7466] = 3,
    ACTIONS(242), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(244), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7491] = 3,
    ACTIONS(214), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(216), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7516] = 3,
    ACTIONS(226), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(228), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7541] = 3,
    ACTIONS(238), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(240), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7566] = 3,
    ACTIONS(246), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(248), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7591] = 3,
    ACTIONS(250), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(252), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7616] = 3,
    ACTIONS(254), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(256), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7641] = 3,
    ACTIONS(210), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(212), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7666] = 3,
    ACTIONS(170), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(172), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7691] = 3,
    ACTIONS(140), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(142), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7716] = 3,
    ACTIONS(230), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(232), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7741] = 3,
    ACTIONS(234), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(236), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7766] = 3,
    ACTIONS(222), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(224), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7791] = 3,
    ACTIONS(132), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(134), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7816] = 3,
    ACTIONS(158), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(160), 16,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [7841] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_SLASH,
    ACTIONS(339), 1,
      anon_sym_AMP_AMP,
    ACTIONS(343), 1,
      anon_sym_QMARK,
    ACTIONS(345), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(349), 1,
      anon_sym_if,
    ACTIONS(369), 1,
      anon_sym_RBRACK,
    STATE(251), 1,
      sym_for_cond,
    ACTIONS(327), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(329), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(333), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(335), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(337), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [7886] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    ACTIONS(292), 1,
      anon_sym_AMP_AMP,
    ACTIONS(294), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(313), 1,
      anon_sym_QMARK,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(286), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(371), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [7926] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    ACTIONS(292), 1,
      anon_sym_AMP_AMP,
    ACTIONS(294), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(306), 1,
      anon_sym_EQ,
    ACTIONS(308), 1,
      anon_sym_COLON,
    ACTIONS(313), 1,
      anon_sym_QMARK,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(286), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [7968] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    ACTIONS(292), 1,
      anon_sym_AMP_AMP,
    ACTIONS(294), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(313), 1,
      anon_sym_QMARK,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(286), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(373), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [8008] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    ACTIONS(292), 1,
      anon_sym_AMP_AMP,
    ACTIONS(294), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(313), 1,
      anon_sym_QMARK,
    ACTIONS(375), 1,
      anon_sym_RBRACE,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(286), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [8047] = 3,
    ACTIONS(266), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(268), 14,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8070] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    ACTIONS(292), 1,
      anon_sym_AMP_AMP,
    ACTIONS(294), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(313), 1,
      anon_sym_QMARK,
    ACTIONS(377), 1,
      anon_sym_COLON,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(286), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [8109] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    ACTIONS(292), 1,
      anon_sym_AMP_AMP,
    ACTIONS(294), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(313), 1,
      anon_sym_QMARK,
    ACTIONS(379), 1,
      anon_sym_EQ_GT,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(286), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [8148] = 4,
    ACTIONS(262), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(381), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(264), 11,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8173] = 3,
    ACTIONS(262), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(264), 14,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8196] = 5,
    ACTIONS(262), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(383), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(381), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(264), 9,
      anon_sym_QMARK,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8223] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    ACTIONS(292), 1,
      anon_sym_AMP_AMP,
    ACTIONS(294), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(313), 1,
      anon_sym_QMARK,
    ACTIONS(385), 1,
      anon_sym_COLON,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(286), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [8262] = 6,
    ACTIONS(262), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(383), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(381), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(387), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
    ACTIONS(264), 5,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8291] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    ACTIONS(292), 1,
      anon_sym_AMP_AMP,
    ACTIONS(294), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(313), 1,
      anon_sym_QMARK,
    ACTIONS(389), 1,
      anon_sym_COLON,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(286), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [8330] = 7,
    ACTIONS(262), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(383), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(391), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(264), 3,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(381), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(387), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
  [8361] = 9,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_LF,
    ACTIONS(290), 1,
      anon_sym_QMARK,
    ACTIONS(393), 1,
      anon_sym_AMP_AMP,
    ACTIONS(395), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(383), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(391), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(381), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(387), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
  [8396] = 8,
    ACTIONS(262), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_AMP_AMP,
    ACTIONS(264), 2,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
    ACTIONS(383), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(391), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(381), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(387), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
  [8429] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    ACTIONS(292), 1,
      anon_sym_AMP_AMP,
    ACTIONS(294), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(313), 1,
      anon_sym_QMARK,
    ACTIONS(397), 1,
      anon_sym_COLON,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(286), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [8468] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    ACTIONS(292), 1,
      anon_sym_AMP_AMP,
    ACTIONS(294), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(313), 1,
      anon_sym_QMARK,
    ACTIONS(399), 1,
      anon_sym_RPAREN,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(286), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [8507] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    ACTIONS(292), 1,
      anon_sym_AMP_AMP,
    ACTIONS(294), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(313), 1,
      anon_sym_QMARK,
    ACTIONS(401), 1,
      anon_sym_RBRACK,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(286), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [8546] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    ACTIONS(292), 1,
      anon_sym_AMP_AMP,
    ACTIONS(294), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(313), 1,
      anon_sym_QMARK,
    ACTIONS(403), 1,
      anon_sym_RBRACE,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(286), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [8585] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    ACTIONS(292), 1,
      anon_sym_AMP_AMP,
    ACTIONS(294), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(313), 1,
      anon_sym_QMARK,
    ACTIONS(405), 1,
      anon_sym_COLON,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(286), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [8624] = 9,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_AMP_AMP,
    ACTIONS(395), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(407), 1,
      anon_sym_LF,
    ACTIONS(409), 1,
      anon_sym_QMARK,
    ACTIONS(383), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(391), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(381), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(387), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
  [8659] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    ACTIONS(292), 1,
      anon_sym_AMP_AMP,
    ACTIONS(294), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(313), 1,
      anon_sym_QMARK,
    ACTIONS(411), 1,
      anon_sym_RBRACK,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(286), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [8698] = 3,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(53), 14,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8721] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    ACTIONS(292), 1,
      anon_sym_AMP_AMP,
    ACTIONS(294), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(313), 1,
      anon_sym_QMARK,
    ACTIONS(413), 1,
      anon_sym_EQ_GT,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(286), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [8760] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    ACTIONS(292), 1,
      anon_sym_AMP_AMP,
    ACTIONS(294), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(313), 1,
      anon_sym_QMARK,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
    ACTIONS(276), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(282), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(286), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [8799] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 4,
      sym_identifier,
      sym_null,
      sym_true,
      sym_false,
    ACTIONS(417), 8,
      sym_heredoc,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_numeric_literal,
  [8819] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 4,
      sym_identifier,
      sym_null,
      sym_true,
      sym_false,
    ACTIONS(421), 8,
      sym_heredoc,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_numeric_literal,
  [8839] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym_identifier,
    ACTIONS(425), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(199), 4,
      sym_block,
      sym_one_line_block,
      sym_attribute,
      aux_sym_body_repeat1,
  [8856] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(430), 1,
      anon_sym_LBRACE,
    ACTIONS(432), 1,
      anon_sym_EQ,
    ACTIONS(434), 1,
      sym_identifier,
    STATE(217), 1,
      sym_quoted_template,
    STATE(205), 2,
      sym_string_literal,
      aux_sym_block_repeat1,
  [8879] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(436), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(199), 4,
      sym_block,
      sym_one_line_block,
      sym_attribute,
      aux_sym_body_repeat1,
  [8896] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_LBRACE,
    ACTIONS(440), 1,
      anon_sym_DQUOTE,
    ACTIONS(443), 1,
      sym_identifier,
    STATE(217), 1,
      sym_quoted_template,
    STATE(202), 2,
      sym_string_literal,
      aux_sym_block_repeat1,
  [8916] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_identifier,
    STATE(259), 1,
      sym_body,
    STATE(201), 4,
      sym_block,
      sym_one_line_block,
      sym_attribute,
      aux_sym_body_repeat1,
  [8932] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_identifier,
    STATE(246), 1,
      sym_body,
    STATE(201), 4,
      sym_block,
      sym_one_line_block,
      sym_attribute,
      aux_sym_body_repeat1,
  [8948] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    ACTIONS(448), 1,
      sym_identifier,
    STATE(217), 1,
      sym_quoted_template,
    STATE(202), 2,
      sym_string_literal,
      aux_sym_block_repeat1,
  [8968] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(353), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
  [8983] = 4,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_DQUOTE,
    STATE(209), 1,
      aux_sym_quoted_template_repeat1,
    ACTIONS(455), 2,
      aux_sym_quoted_template_token1,
      sym_escape_sequence,
  [8997] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(457), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(459), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym_tuple_repeat1,
  [9013] = 4,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_DQUOTE,
    STATE(209), 1,
      aux_sym_quoted_template_repeat1,
    ACTIONS(463), 2,
      aux_sym_quoted_template_token1,
      sym_escape_sequence,
  [9027] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(466), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(468), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym_tuple_repeat1,
  [9043] = 4,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_DQUOTE,
    STATE(212), 1,
      aux_sym_quoted_template_repeat1,
    ACTIONS(472), 2,
      aux_sym_quoted_template_token1,
      sym_escape_sequence,
  [9057] = 4,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_DQUOTE,
    STATE(209), 1,
      aux_sym_quoted_template_repeat1,
    ACTIONS(455), 2,
      aux_sym_quoted_template_token1,
      sym_escape_sequence,
  [9071] = 4,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_DQUOTE,
    STATE(207), 1,
      aux_sym_quoted_template_repeat1,
    ACTIONS(478), 2,
      aux_sym_quoted_template_token1,
      sym_escape_sequence,
  [9085] = 4,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_DQUOTE,
    STATE(215), 1,
      aux_sym_quoted_template_repeat1,
    ACTIONS(482), 2,
      aux_sym_quoted_template_token1,
      sym_escape_sequence,
  [9099] = 4,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_DQUOTE,
    STATE(209), 1,
      aux_sym_quoted_template_repeat1,
    ACTIONS(455), 2,
      aux_sym_quoted_template_token1,
      sym_escape_sequence,
  [9113] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    ACTIONS(486), 1,
      anon_sym_COMMA,
    STATE(230), 1,
      aux_sym_object_repeat1,
  [9126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 3,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_identifier,
  [9135] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_RBRACE,
    ACTIONS(492), 1,
      anon_sym_COMMA,
    STATE(216), 1,
      aux_sym_object_repeat1,
  [9148] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
    ACTIONS(494), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym_tuple_repeat1,
  [9161] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    STATE(230), 1,
      aux_sym_object_repeat1,
  [9174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [9183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [9192] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_RBRACE,
    ACTIONS(504), 1,
      anon_sym_COMMA,
    STATE(220), 1,
      aux_sym_object_repeat1,
  [9205] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_RBRACK,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym_tuple_repeat1,
  [9218] = 4,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_LF,
    ACTIONS(510), 1,
      anon_sym_RBRACE,
    ACTIONS(512), 1,
      sym_identifier,
  [9231] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_if,
    ACTIONS(514), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      sym_for_cond,
  [9244] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_if,
    ACTIONS(516), 1,
      anon_sym_RBRACE,
    STATE(242), 1,
      sym_for_cond,
  [9257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [9266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [9275] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_RBRACE,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    STATE(230), 1,
      aux_sym_object_repeat1,
  [9288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [9297] = 4,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_LF,
    ACTIONS(531), 1,
      anon_sym_RBRACE,
    ACTIONS(533), 1,
      sym_identifier,
  [9310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [9319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [9328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [9336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_STAR,
    ACTIONS(541), 1,
      sym_identifier,
  [9346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_COMMA,
    ACTIONS(545), 1,
      anon_sym_in,
  [9356] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_STAR,
    ACTIONS(549), 1,
      sym_identifier,
  [9366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_RBRACE,
  [9373] = 2,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_LF,
  [9380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_RBRACK,
  [9387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_RBRACE,
  [9394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_RBRACE,
  [9401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      sym_identifier,
  [9408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
  [9415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_RBRACE,
  [9422] = 2,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_LF,
  [9429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
  [9436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_RBRACK,
  [9443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      sym_identifier,
  [9450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_RBRACK,
  [9457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
  [9464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_EQ,
  [9471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      sym_identifier,
  [9478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      sym_identifier,
  [9485] = 2,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_LF,
  [9492] = 2,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_LF,
  [9499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_in,
  [9506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_RBRACE,
  [9513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
  [9520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_RBRACK,
  [9527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_RBRACE,
  [9534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_EQ,
  [9541] = 2,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_LF,
  [9548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      ts_builtin_sym_end,
  [9555] = 2,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_LF,
  [9562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 79,
  [SMALL_STATE(4)] = 158,
  [SMALL_STATE(5)] = 234,
  [SMALL_STATE(6)] = 310,
  [SMALL_STATE(7)] = 383,
  [SMALL_STATE(8)] = 456,
  [SMALL_STATE(9)] = 529,
  [SMALL_STATE(10)] = 602,
  [SMALL_STATE(11)] = 672,
  [SMALL_STATE(12)] = 742,
  [SMALL_STATE(13)] = 812,
  [SMALL_STATE(14)] = 882,
  [SMALL_STATE(15)] = 928,
  [SMALL_STATE(16)] = 998,
  [SMALL_STATE(17)] = 1068,
  [SMALL_STATE(18)] = 1138,
  [SMALL_STATE(19)] = 1208,
  [SMALL_STATE(20)] = 1278,
  [SMALL_STATE(21)] = 1348,
  [SMALL_STATE(22)] = 1418,
  [SMALL_STATE(23)] = 1488,
  [SMALL_STATE(24)] = 1558,
  [SMALL_STATE(25)] = 1604,
  [SMALL_STATE(26)] = 1671,
  [SMALL_STATE(27)] = 1738,
  [SMALL_STATE(28)] = 1805,
  [SMALL_STATE(29)] = 1872,
  [SMALL_STATE(30)] = 1939,
  [SMALL_STATE(31)] = 2006,
  [SMALL_STATE(32)] = 2073,
  [SMALL_STATE(33)] = 2140,
  [SMALL_STATE(34)] = 2207,
  [SMALL_STATE(35)] = 2274,
  [SMALL_STATE(36)] = 2341,
  [SMALL_STATE(37)] = 2408,
  [SMALL_STATE(38)] = 2475,
  [SMALL_STATE(39)] = 2542,
  [SMALL_STATE(40)] = 2609,
  [SMALL_STATE(41)] = 2676,
  [SMALL_STATE(42)] = 2743,
  [SMALL_STATE(43)] = 2810,
  [SMALL_STATE(44)] = 2877,
  [SMALL_STATE(45)] = 2944,
  [SMALL_STATE(46)] = 3011,
  [SMALL_STATE(47)] = 3078,
  [SMALL_STATE(48)] = 3145,
  [SMALL_STATE(49)] = 3212,
  [SMALL_STATE(50)] = 3279,
  [SMALL_STATE(51)] = 3346,
  [SMALL_STATE(52)] = 3413,
  [SMALL_STATE(53)] = 3480,
  [SMALL_STATE(54)] = 3547,
  [SMALL_STATE(55)] = 3614,
  [SMALL_STATE(56)] = 3681,
  [SMALL_STATE(57)] = 3748,
  [SMALL_STATE(58)] = 3815,
  [SMALL_STATE(59)] = 3882,
  [SMALL_STATE(60)] = 3949,
  [SMALL_STATE(61)] = 4016,
  [SMALL_STATE(62)] = 4083,
  [SMALL_STATE(63)] = 4150,
  [SMALL_STATE(64)] = 4217,
  [SMALL_STATE(65)] = 4284,
  [SMALL_STATE(66)] = 4351,
  [SMALL_STATE(67)] = 4418,
  [SMALL_STATE(68)] = 4460,
  [SMALL_STATE(69)] = 4502,
  [SMALL_STATE(70)] = 4544,
  [SMALL_STATE(71)] = 4583,
  [SMALL_STATE(72)] = 4618,
  [SMALL_STATE(73)] = 4657,
  [SMALL_STATE(74)] = 4692,
  [SMALL_STATE(75)] = 4731,
  [SMALL_STATE(76)] = 4767,
  [SMALL_STATE(77)] = 4800,
  [SMALL_STATE(78)] = 4833,
  [SMALL_STATE(79)] = 4866,
  [SMALL_STATE(80)] = 4899,
  [SMALL_STATE(81)] = 4932,
  [SMALL_STATE(82)] = 4965,
  [SMALL_STATE(83)] = 4998,
  [SMALL_STATE(84)] = 5031,
  [SMALL_STATE(85)] = 5064,
  [SMALL_STATE(86)] = 5097,
  [SMALL_STATE(87)] = 5130,
  [SMALL_STATE(88)] = 5163,
  [SMALL_STATE(89)] = 5196,
  [SMALL_STATE(90)] = 5229,
  [SMALL_STATE(91)] = 5262,
  [SMALL_STATE(92)] = 5295,
  [SMALL_STATE(93)] = 5328,
  [SMALL_STATE(94)] = 5361,
  [SMALL_STATE(95)] = 5394,
  [SMALL_STATE(96)] = 5427,
  [SMALL_STATE(97)] = 5460,
  [SMALL_STATE(98)] = 5493,
  [SMALL_STATE(99)] = 5526,
  [SMALL_STATE(100)] = 5559,
  [SMALL_STATE(101)] = 5592,
  [SMALL_STATE(102)] = 5625,
  [SMALL_STATE(103)] = 5658,
  [SMALL_STATE(104)] = 5689,
  [SMALL_STATE(105)] = 5720,
  [SMALL_STATE(106)] = 5751,
  [SMALL_STATE(107)] = 5789,
  [SMALL_STATE(108)] = 5825,
  [SMALL_STATE(109)] = 5859,
  [SMALL_STATE(110)] = 5911,
  [SMALL_STATE(111)] = 5949,
  [SMALL_STATE(112)] = 6001,
  [SMALL_STATE(113)] = 6053,
  [SMALL_STATE(114)] = 6095,
  [SMALL_STATE(115)] = 6141,
  [SMALL_STATE(116)] = 6185,
  [SMALL_STATE(117)] = 6225,
  [SMALL_STATE(118)] = 6259,
  [SMALL_STATE(119)] = 6293,
  [SMALL_STATE(120)] = 6327,
  [SMALL_STATE(121)] = 6355,
  [SMALL_STATE(122)] = 6383,
  [SMALL_STATE(123)] = 6416,
  [SMALL_STATE(124)] = 6447,
  [SMALL_STATE(125)] = 6478,
  [SMALL_STATE(126)] = 6509,
  [SMALL_STATE(127)] = 6557,
  [SMALL_STATE(128)] = 6605,
  [SMALL_STATE(129)] = 6643,
  [SMALL_STATE(130)] = 6679,
  [SMALL_STATE(131)] = 6727,
  [SMALL_STATE(132)] = 6761,
  [SMALL_STATE(133)] = 6789,
  [SMALL_STATE(134)] = 6821,
  [SMALL_STATE(135)] = 6851,
  [SMALL_STATE(136)] = 6893,
  [SMALL_STATE(137)] = 6941,
  [SMALL_STATE(138)] = 6981,
  [SMALL_STATE(139)] = 7006,
  [SMALL_STATE(140)] = 7031,
  [SMALL_STATE(141)] = 7056,
  [SMALL_STATE(142)] = 7101,
  [SMALL_STATE(143)] = 7126,
  [SMALL_STATE(144)] = 7151,
  [SMALL_STATE(145)] = 7176,
  [SMALL_STATE(146)] = 7201,
  [SMALL_STATE(147)] = 7226,
  [SMALL_STATE(148)] = 7251,
  [SMALL_STATE(149)] = 7296,
  [SMALL_STATE(150)] = 7321,
  [SMALL_STATE(151)] = 7346,
  [SMALL_STATE(152)] = 7371,
  [SMALL_STATE(153)] = 7416,
  [SMALL_STATE(154)] = 7441,
  [SMALL_STATE(155)] = 7466,
  [SMALL_STATE(156)] = 7491,
  [SMALL_STATE(157)] = 7516,
  [SMALL_STATE(158)] = 7541,
  [SMALL_STATE(159)] = 7566,
  [SMALL_STATE(160)] = 7591,
  [SMALL_STATE(161)] = 7616,
  [SMALL_STATE(162)] = 7641,
  [SMALL_STATE(163)] = 7666,
  [SMALL_STATE(164)] = 7691,
  [SMALL_STATE(165)] = 7716,
  [SMALL_STATE(166)] = 7741,
  [SMALL_STATE(167)] = 7766,
  [SMALL_STATE(168)] = 7791,
  [SMALL_STATE(169)] = 7816,
  [SMALL_STATE(170)] = 7841,
  [SMALL_STATE(171)] = 7886,
  [SMALL_STATE(172)] = 7926,
  [SMALL_STATE(173)] = 7968,
  [SMALL_STATE(174)] = 8008,
  [SMALL_STATE(175)] = 8047,
  [SMALL_STATE(176)] = 8070,
  [SMALL_STATE(177)] = 8109,
  [SMALL_STATE(178)] = 8148,
  [SMALL_STATE(179)] = 8173,
  [SMALL_STATE(180)] = 8196,
  [SMALL_STATE(181)] = 8223,
  [SMALL_STATE(182)] = 8262,
  [SMALL_STATE(183)] = 8291,
  [SMALL_STATE(184)] = 8330,
  [SMALL_STATE(185)] = 8361,
  [SMALL_STATE(186)] = 8396,
  [SMALL_STATE(187)] = 8429,
  [SMALL_STATE(188)] = 8468,
  [SMALL_STATE(189)] = 8507,
  [SMALL_STATE(190)] = 8546,
  [SMALL_STATE(191)] = 8585,
  [SMALL_STATE(192)] = 8624,
  [SMALL_STATE(193)] = 8659,
  [SMALL_STATE(194)] = 8698,
  [SMALL_STATE(195)] = 8721,
  [SMALL_STATE(196)] = 8760,
  [SMALL_STATE(197)] = 8799,
  [SMALL_STATE(198)] = 8819,
  [SMALL_STATE(199)] = 8839,
  [SMALL_STATE(200)] = 8856,
  [SMALL_STATE(201)] = 8879,
  [SMALL_STATE(202)] = 8896,
  [SMALL_STATE(203)] = 8916,
  [SMALL_STATE(204)] = 8932,
  [SMALL_STATE(205)] = 8948,
  [SMALL_STATE(206)] = 8968,
  [SMALL_STATE(207)] = 8983,
  [SMALL_STATE(208)] = 8997,
  [SMALL_STATE(209)] = 9013,
  [SMALL_STATE(210)] = 9027,
  [SMALL_STATE(211)] = 9043,
  [SMALL_STATE(212)] = 9057,
  [SMALL_STATE(213)] = 9071,
  [SMALL_STATE(214)] = 9085,
  [SMALL_STATE(215)] = 9099,
  [SMALL_STATE(216)] = 9113,
  [SMALL_STATE(217)] = 9126,
  [SMALL_STATE(218)] = 9135,
  [SMALL_STATE(219)] = 9148,
  [SMALL_STATE(220)] = 9161,
  [SMALL_STATE(221)] = 9174,
  [SMALL_STATE(222)] = 9183,
  [SMALL_STATE(223)] = 9192,
  [SMALL_STATE(224)] = 9205,
  [SMALL_STATE(225)] = 9218,
  [SMALL_STATE(226)] = 9231,
  [SMALL_STATE(227)] = 9244,
  [SMALL_STATE(228)] = 9257,
  [SMALL_STATE(229)] = 9266,
  [SMALL_STATE(230)] = 9275,
  [SMALL_STATE(231)] = 9288,
  [SMALL_STATE(232)] = 9297,
  [SMALL_STATE(233)] = 9310,
  [SMALL_STATE(234)] = 9319,
  [SMALL_STATE(235)] = 9328,
  [SMALL_STATE(236)] = 9336,
  [SMALL_STATE(237)] = 9346,
  [SMALL_STATE(238)] = 9356,
  [SMALL_STATE(239)] = 9366,
  [SMALL_STATE(240)] = 9373,
  [SMALL_STATE(241)] = 9380,
  [SMALL_STATE(242)] = 9387,
  [SMALL_STATE(243)] = 9394,
  [SMALL_STATE(244)] = 9401,
  [SMALL_STATE(245)] = 9408,
  [SMALL_STATE(246)] = 9415,
  [SMALL_STATE(247)] = 9422,
  [SMALL_STATE(248)] = 9429,
  [SMALL_STATE(249)] = 9436,
  [SMALL_STATE(250)] = 9443,
  [SMALL_STATE(251)] = 9450,
  [SMALL_STATE(252)] = 9457,
  [SMALL_STATE(253)] = 9464,
  [SMALL_STATE(254)] = 9471,
  [SMALL_STATE(255)] = 9478,
  [SMALL_STATE(256)] = 9485,
  [SMALL_STATE(257)] = 9492,
  [SMALL_STATE(258)] = 9499,
  [SMALL_STATE(259)] = 9506,
  [SMALL_STATE(260)] = 9513,
  [SMALL_STATE(261)] = 9520,
  [SMALL_STATE(262)] = 9527,
  [SMALL_STATE(263)] = 9534,
  [SMALL_STATE(264)] = 9541,
  [SMALL_STATE(265)] = 9548,
  [SMALL_STATE(266)] = 9555,
  [SMALL_STATE(267)] = 9562,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_op, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_op, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_splat_full_repeat1, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_splat_full_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_splat_full_repeat1, 2), SHIFT_REPEAT(44),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_splat_full_repeat1, 2), SHIFT_REPEAT(250),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat_full, 4),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat_full, 4),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat_full, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat_full, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_splat_attr_repeat1, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_splat_attr_repeat1, 2),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_splat_attr_repeat1, 2), SHIFT_REPEAT(250),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_template, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat_attr, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat_attr, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_template, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat_attr, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat_attr, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expr, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_expr, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 6),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_expr, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_expr, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_attr, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_attr, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_tuple, 4),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__for_tuple, 4),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_object, 8),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__for_object, 8),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_object, 7),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__for_object, 7),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 3),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_term, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_object, 6),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__for_object, 6),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat, 1),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_term, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_tuple, 5),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__for_tuple, 5),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 5),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 5),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_value, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_value, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 5),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_value, 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_value, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expr, 1),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expr, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_term, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 3),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_op, 3, .production_id = 1),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_op, 3, .production_id = 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 1),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 5),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_splat_full_repeat1, 2), SHIFT_REPEAT(62),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_splat_full_repeat1, 2), SHIFT_REPEAT(255),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_splat_attr_repeat1, 2), SHIFT_REPEAT(255),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_elem, 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_cond, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 5),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 5),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 7),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 7),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(200),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(213),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(202),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(58),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_template_repeat1, 2),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 2), SHIFT_REPEAT(209),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_line_block, 8),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 7),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_line_block, 7),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(11),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_line_block, 5),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_line_block, 4),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 6),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [591] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_hcl_external_scanner_create(void);
void tree_sitter_hcl_external_scanner_destroy(void *);
bool tree_sitter_hcl_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_hcl_external_scanner_serialize(void *, char *);
void tree_sitter_hcl_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hcl(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_hcl_external_scanner_create,
      tree_sitter_hcl_external_scanner_destroy,
      tree_sitter_hcl_external_scanner_scan,
      tree_sitter_hcl_external_scanner_serialize,
      tree_sitter_hcl_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
