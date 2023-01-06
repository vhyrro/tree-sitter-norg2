#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 27
#define LARGE_STATE_COUNT 10
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym__character = 1,
  sym_whitespace = 2,
  anon_sym_LF = 3,
  anon_sym_CR = 4,
  anon_sym_CR_LF = 5,
  anon_sym_ = 6,
  anon_sym_BSLASH = 7,
  aux_sym_escape_sequence_token1 = 8,
  aux_sym_heading_token1 = 9,
  sym_document = 10,
  sym_word = 11,
  sym__newline = 12,
  sym_escape_sequence = 13,
  sym_paragraph_segment = 14,
  sym_paragraph = 15,
  sym_heading = 16,
  aux_sym_document_repeat1 = 17,
  aux_sym_word_repeat1 = 18,
  aux_sym_paragraph_segment_repeat1 = 19,
  aux_sym_paragraph_repeat1 = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__character] = "_character",
  [sym_whitespace] = "whitespace",
  [anon_sym_LF] = "\n",
  [anon_sym_CR] = "\r",
  [anon_sym_CR_LF] = "\r\n",
  [anon_sym_] = " ",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_escape_sequence_token1] = "escape_char",
  [aux_sym_heading_token1] = "prefix",
  [sym_document] = "document",
  [sym_word] = "word",
  [sym__newline] = "_newline",
  [sym_escape_sequence] = "escape_sequence",
  [sym_paragraph_segment] = "paragraph_segment",
  [sym_paragraph] = "paragraph",
  [sym_heading] = "heading",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_word_repeat1] = "word_repeat1",
  [aux_sym_paragraph_segment_repeat1] = "paragraph_segment_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__character] = sym__character,
  [sym_whitespace] = sym_whitespace,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR] = anon_sym_CR,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [anon_sym_] = anon_sym_,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_escape_sequence_token1] = aux_sym_escape_sequence_token1,
  [aux_sym_heading_token1] = aux_sym_heading_token1,
  [sym_document] = sym_document,
  [sym_word] = sym_word,
  [sym__newline] = sym__newline,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_paragraph_segment] = sym_paragraph_segment,
  [sym_paragraph] = sym_paragraph,
  [sym_heading] = sym_heading,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_word_repeat1] = aux_sym_word_repeat1,
  [aux_sym_paragraph_segment_repeat1] = aux_sym_paragraph_segment_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__character] = {
    .visible = false,
    .named = true,
  },
  [sym_whitespace] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_escape_sequence_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_heading_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_paragraph_segment] = {
    .visible = true,
    .named = true,
  },
  [sym_paragraph] = {
    .visible = true,
    .named = true,
  },
  [sym_heading] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_word_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_paragraph_segment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_paragraph_repeat1] = {
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
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 6,
  [9] = 7,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 10,
  [16] = 16,
  [17] = 11,
  [18] = 12,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 24,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == 0) ADVANCE(15);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(9);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(15);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(9);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 2:
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(10);
      END_STATE();
    case 4:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == 0) ADVANCE(15);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(9);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym__character);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym__character);
      if (lookahead == '*') ADVANCE(18);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym__character);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '*') ADVANCE(18);
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
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__character] = ACTIONS(1),
    [sym_whitespace] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_CR] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [aux_sym_escape_sequence_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(25),
    [sym_word] = STATE(9),
    [sym__newline] = STATE(2),
    [sym_escape_sequence] = STATE(9),
    [sym_paragraph_segment] = STATE(19),
    [sym_paragraph] = STATE(2),
    [sym_heading] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_word_repeat1] = STATE(17),
    [aux_sym_paragraph_segment_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__character] = ACTIONS(5),
    [sym_whitespace] = ACTIONS(7),
    [anon_sym_LF] = ACTIONS(9),
    [anon_sym_CR] = ACTIONS(11),
    [anon_sym_CR_LF] = ACTIONS(9),
    [anon_sym_] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(13),
    [aux_sym_heading_token1] = ACTIONS(15),
  },
  [2] = {
    [sym_word] = STATE(9),
    [sym__newline] = STATE(3),
    [sym_escape_sequence] = STATE(9),
    [sym_paragraph_segment] = STATE(19),
    [sym_paragraph] = STATE(3),
    [sym_heading] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_word_repeat1] = STATE(17),
    [aux_sym_paragraph_segment_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym__character] = ACTIONS(5),
    [sym_whitespace] = ACTIONS(7),
    [anon_sym_LF] = ACTIONS(19),
    [anon_sym_CR] = ACTIONS(21),
    [anon_sym_CR_LF] = ACTIONS(19),
    [anon_sym_] = ACTIONS(19),
    [anon_sym_BSLASH] = ACTIONS(13),
    [aux_sym_heading_token1] = ACTIONS(15),
  },
  [3] = {
    [sym_word] = STATE(9),
    [sym__newline] = STATE(3),
    [sym_escape_sequence] = STATE(9),
    [sym_paragraph_segment] = STATE(19),
    [sym_paragraph] = STATE(3),
    [sym_heading] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_word_repeat1] = STATE(17),
    [aux_sym_paragraph_segment_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym__character] = ACTIONS(25),
    [sym_whitespace] = ACTIONS(28),
    [anon_sym_LF] = ACTIONS(31),
    [anon_sym_CR] = ACTIONS(34),
    [anon_sym_CR_LF] = ACTIONS(31),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_BSLASH] = ACTIONS(37),
    [aux_sym_heading_token1] = ACTIONS(40),
  },
  [4] = {
    [sym_word] = STATE(9),
    [sym_escape_sequence] = STATE(9),
    [sym_paragraph_segment] = STATE(22),
    [aux_sym_word_repeat1] = STATE(17),
    [aux_sym_paragraph_segment_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym__character] = ACTIONS(5),
    [sym_whitespace] = ACTIONS(7),
    [anon_sym_LF] = ACTIONS(43),
    [anon_sym_CR] = ACTIONS(45),
    [anon_sym_CR_LF] = ACTIONS(43),
    [anon_sym_] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(13),
    [aux_sym_heading_token1] = ACTIONS(45),
  },
  [5] = {
    [sym_word] = STATE(9),
    [sym_escape_sequence] = STATE(9),
    [sym_paragraph_segment] = STATE(22),
    [aux_sym_word_repeat1] = STATE(17),
    [aux_sym_paragraph_segment_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym__character] = ACTIONS(5),
    [sym_whitespace] = ACTIONS(7),
    [anon_sym_LF] = ACTIONS(47),
    [anon_sym_CR] = ACTIONS(49),
    [anon_sym_CR_LF] = ACTIONS(47),
    [anon_sym_] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(13),
    [aux_sym_heading_token1] = ACTIONS(49),
  },
  [6] = {
    [sym_word] = STATE(6),
    [sym_escape_sequence] = STATE(6),
    [aux_sym_word_repeat1] = STATE(11),
    [aux_sym_paragraph_segment_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym__character] = ACTIONS(53),
    [sym_whitespace] = ACTIONS(56),
    [anon_sym_LF] = ACTIONS(51),
    [anon_sym_CR] = ACTIONS(59),
    [anon_sym_CR_LF] = ACTIONS(51),
    [anon_sym_] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(61),
    [aux_sym_heading_token1] = ACTIONS(59),
  },
  [7] = {
    [sym_word] = STATE(6),
    [sym_escape_sequence] = STATE(6),
    [aux_sym_word_repeat1] = STATE(11),
    [aux_sym_paragraph_segment_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(64),
    [sym__character] = ACTIONS(66),
    [sym_whitespace] = ACTIONS(68),
    [anon_sym_LF] = ACTIONS(64),
    [anon_sym_CR] = ACTIONS(70),
    [anon_sym_CR_LF] = ACTIONS(64),
    [anon_sym_] = ACTIONS(64),
    [anon_sym_BSLASH] = ACTIONS(72),
    [aux_sym_heading_token1] = ACTIONS(70),
  },
  [8] = {
    [sym_word] = STATE(8),
    [sym_escape_sequence] = STATE(8),
    [aux_sym_word_repeat1] = STATE(17),
    [aux_sym_paragraph_segment_repeat1] = STATE(8),
    [sym__character] = ACTIONS(74),
    [sym_whitespace] = ACTIONS(77),
    [anon_sym_LF] = ACTIONS(51),
    [anon_sym_CR] = ACTIONS(59),
    [anon_sym_CR_LF] = ACTIONS(51),
    [anon_sym_] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(80),
  },
  [9] = {
    [sym_word] = STATE(8),
    [sym_escape_sequence] = STATE(8),
    [aux_sym_word_repeat1] = STATE(17),
    [aux_sym_paragraph_segment_repeat1] = STATE(8),
    [sym__character] = ACTIONS(5),
    [sym_whitespace] = ACTIONS(83),
    [anon_sym_LF] = ACTIONS(64),
    [anon_sym_CR] = ACTIONS(70),
    [anon_sym_CR_LF] = ACTIONS(64),
    [anon_sym_] = ACTIONS(64),
    [anon_sym_BSLASH] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(87), 1,
      sym__character,
    STATE(10), 1,
      aux_sym_word_repeat1,
    ACTIONS(90), 3,
      sym_whitespace,
      anon_sym_CR,
      aux_sym_heading_token1,
    ACTIONS(85), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_BSLASH,
  [19] = 4,
    ACTIONS(94), 1,
      sym__character,
    STATE(10), 1,
      aux_sym_word_repeat1,
    ACTIONS(96), 3,
      sym_whitespace,
      anon_sym_CR,
      aux_sym_heading_token1,
    ACTIONS(92), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_BSLASH,
  [38] = 2,
    ACTIONS(100), 4,
      sym__character,
      sym_whitespace,
      anon_sym_CR,
      aux_sym_heading_token1,
    ACTIONS(98), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_BSLASH,
  [52] = 2,
    ACTIONS(104), 4,
      sym__character,
      sym_whitespace,
      anon_sym_CR,
      aux_sym_heading_token1,
    ACTIONS(102), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_BSLASH,
  [66] = 6,
    ACTIONS(66), 1,
      sym__character,
    ACTIONS(72), 1,
      anon_sym_BSLASH,
    ACTIONS(106), 1,
      sym_whitespace,
    STATE(11), 1,
      aux_sym_word_repeat1,
    STATE(13), 1,
      sym_paragraph_segment,
    STATE(7), 3,
      sym_word,
      sym_escape_sequence,
      aux_sym_paragraph_segment_repeat1,
  [87] = 4,
    ACTIONS(108), 1,
      sym__character,
    STATE(15), 1,
      aux_sym_word_repeat1,
    ACTIONS(90), 2,
      sym_whitespace,
      anon_sym_CR,
    ACTIONS(85), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_BSLASH,
  [104] = 6,
    ACTIONS(5), 1,
      sym__character,
    ACTIONS(7), 1,
      sym_whitespace,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    STATE(17), 1,
      aux_sym_word_repeat1,
    STATE(22), 1,
      sym_paragraph_segment,
    STATE(9), 3,
      sym_word,
      sym_escape_sequence,
      aux_sym_paragraph_segment_repeat1,
  [125] = 4,
    ACTIONS(111), 1,
      sym__character,
    STATE(15), 1,
      aux_sym_word_repeat1,
    ACTIONS(96), 2,
      sym_whitespace,
      anon_sym_CR,
    ACTIONS(92), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_BSLASH,
  [142] = 2,
    ACTIONS(100), 3,
      sym__character,
      sym_whitespace,
      anon_sym_CR,
    ACTIONS(98), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_BSLASH,
  [154] = 4,
    ACTIONS(115), 1,
      anon_sym_CR,
    STATE(5), 1,
      sym__newline,
    STATE(21), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(113), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
  [169] = 4,
    ACTIONS(120), 1,
      anon_sym_CR,
    STATE(16), 1,
      sym__newline,
    STATE(20), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(117), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
  [184] = 4,
    ACTIONS(125), 1,
      anon_sym_CR,
    STATE(4), 1,
      sym__newline,
    STATE(20), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(123), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
  [199] = 2,
    ACTIONS(129), 1,
      anon_sym_CR,
    ACTIONS(127), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
  [208] = 1,
    ACTIONS(131), 1,
      sym_whitespace,
  [212] = 1,
    ACTIONS(133), 1,
      aux_sym_escape_sequence_token1,
  [216] = 1,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
  [220] = 1,
    ACTIONS(137), 1,
      aux_sym_escape_sequence_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(10)] = 0,
  [SMALL_STATE(11)] = 19,
  [SMALL_STATE(12)] = 38,
  [SMALL_STATE(13)] = 52,
  [SMALL_STATE(14)] = 66,
  [SMALL_STATE(15)] = 87,
  [SMALL_STATE(16)] = 104,
  [SMALL_STATE(17)] = 125,
  [SMALL_STATE(18)] = 142,
  [SMALL_STATE(19)] = 154,
  [SMALL_STATE(20)] = 169,
  [SMALL_STATE(21)] = 184,
  [SMALL_STATE(22)] = 199,
  [SMALL_STATE(23)] = 208,
  [SMALL_STATE(24)] = 212,
  [SMALL_STATE(25)] = 216,
  [SMALL_STATE(26)] = 220,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(17),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(24),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(23),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_segment_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_segment_repeat1, 2), SHIFT_REPEAT(11),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_segment_repeat1, 2), SHIFT_REPEAT(6),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_segment_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_segment_repeat1, 2), SHIFT_REPEAT(26),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_segment, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph_segment, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_segment_repeat1, 2), SHIFT_REPEAT(17),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_segment_repeat1, 2), SHIFT_REPEAT(8),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_segment_repeat1, 2), SHIFT_REPEAT(24),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_word_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_repeat1, 2), SHIFT_REPEAT(10),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_word_repeat1, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 3),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_repeat1, 2), SHIFT_REPEAT(15),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(16),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(16),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [135] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_norg(void) {
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
    .keyword_capture_token = sym__character,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
