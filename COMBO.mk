/* https://github.com/qmk/qmk_firmware/blob/master/docs/feature_combo.md
   rules.mk COMBO_ENABLE */



const uint16_t PROGMEM caa_combo[]  = {KC_C,  KC_AA, COMBO_END};
const uint16_t PROGMEM aaw_combo[]  = {KC_AA, KC_W,  COMBO_END};
const uint16_t PROGMEM wz_combo[]   = {KC_W,  KC_Z,  COMBO_END};
const uint16_t PROGMEM pae_combo[]  = {KC_P,  KC_AE, COMBO_END};
const uint16_t PROGMEM jp_combo[]   = {KC_J,  KC_P,  COMBO_END};
const uint16_t PROGMEM at_combo[]   = {KC_A,  KC_T,  COMBO_END};
const uint16_t PROGMEM tn_combo[]   = {KC_T,  KC_N,  COMBO_END};
const uint16_t PROGMEM nr_combo[]   = {KC_N,  KC_R,  COMBO_END};
const uint16_t PROGMEM rb_combo[]   = {KC_R,  KC_B,  COMBO_END};
const uint16_t PROGMEM ie_combo[]   = {KC_I,  KC_E,  COMBO_END};
const uint16_t PROGMEM si_combo[]   = {KC_S,  KC_I,  COMBO_END};
const uint16_t PROGMEM os_combo[]   = {KC_O,  KC_S,  COMBO_END};
const uint16_t PROGMEM yo_combo[]   = {KC_Y,  KC_O,  COMBO_END};
const uint16_t PROGMEM dm_combo[]   = {KC_D,  KC_M,  COMBO_END};
const uint16_t PROGMEM mu_combo[]   = {KC_M,  KC_U,  COMBO_END};
const uint16_t PROGMEM uk_combo[]   = {KC_U,  KC_K,  COMBO_END};
const uint16_t PROGMEM kv_combo[]   = {KC_K,  KC_V,  COMBO_END};
const uint16_t PROGMEM hl_combo[]   = {KC_H,  KC_L,  COMBO_END};
const uint16_t PROGMEM fh_combo[]   = {KC_F,  KC_H,  COMBO_END};
const uint16_t PROGMEM fg_combo[]   = {KC_F,  KC_G,  COMBO_END};
const uint16_t PROGMEM oeg_combo[]  = {KC_OE, KC_G,  COMBO_END};

const uint16_t PROGMEM wj_combo[]   = {KC_W,  KC_J,  COMBO_END};
const uint16_t PROGMEM ae_combo[]   = {KC_A,  KC_E,  COMBO_END};
const uint16_t PROGMEM ti_combo[]   = {KC_T,  KC_I,  COMBO_END};
const uint16_t PROGMEM ns_combo[]   = {KC_N,  KC_S,  COMBO_END};
const uint16_t PROGMEM ro_combo[]   = {KC_R,  KC_O,  COMBO_END};
const uint16_t PROGMEM by_combo[]   = {KC_B,  KC_Y,  COMBO_END};
const uint16_t PROGMEM dl_combo[]   = {KC_D,  KC_L,  COMBO_END};
const uint16_t PROGMEM mh_combo[]   = {KC_M,  KC_H,  COMBO_END};
const uint16_t PROGMEM uf_combo[]   = {KC_U,  KC_F,  COMBO_END};
const uint16_t PROGMEM kg_combo[]   = {KC_K,  KC_G,  COMBO_END};
const uint16_t PROGMEM voe_combo[]  = {KC_V,  KC_OE, COMBO_END};

const uint16_t PROGMEM cae_combo[]  = {KC_C,  KC_AE, COMBO_END};
const uint16_t PROGMEM cq_combo[]   = {KC_C,  KC_Q,  COMBO_END};
const uint16_t PROGMEM cj_combo[]   = {KC_C,  KC_J,  COMBO_END};
const uint16_t PROGMEM co_combo[]   = {KC_C,  KC_O,  COMBO_END};
const uint16_t PROGMEM cg_combo[]   = {KC_C,  KC_G,  COMBO_END};
const uint16_t PROGMEM cs_combo[]   = {KC_C,  KC_S,  COMBO_END};
const uint16_t PROGMEM ci_combo[]   = {KC_C,  KC_I,  COMBO_END};
const uint16_t PROGMEM coe_combo[]  = {KC_C,  KC_OE, COMBO_END};
const uint16_t PROGMEM cf_combo[]   = {KC_C,  KC_F,  COMBO_END};
const uint16_t PROGMEM ch_combo[]   = {KC_C,  KC_H,  COMBO_END};
const uint16_t PROGMEM cl_combo[]   = {KC_C,  KC_L,  COMBO_END};
const uint16_t PROGMEM cy_combo[]   = {KC_C,  KC_Y,  COMBO_END};

const uint16_t PROGMEM aap_combo[]  = {KC_AA, KC_P,  COMBO_END};
const uint16_t PROGMEM aas_combo[]  = {KC_AA, KC_S,  COMBO_END};
const uint16_t PROGMEM aao_combo[]  = {KC_AA, KC_O,  COMBO_END};
const uint16_t PROGMEM aai_combo[]  = {KC_AA, KC_I,  COMBO_END};
const uint16_t PROGMEM aaj_combo[]  = {KC_AA, KC_J,  COMBO_END};
const uint16_t PROGMEM aaae_combo[] = {KC_AA, KC_AE, COMBO_END};
const uint16_t PROGMEM aae_combo[]  = {KC_AA, KC_E,  COMBO_END};
const uint16_t PROGMEM aal_combo[]  = {KC_AA, KC_L,  COMBO_END};

enum combos {
// Basic layout
// X  , C  , AA  , W  , Z  ,               NO_ , J  , P  , AE , Q
// A  , T  , N   , R  , B  ,                Y  , O  , S  , I  , E
// D  , M  , U  ,  K  , V  ,DEL ,    BSPC, OE  , G  , F  , H  , L
// Pairs (20)
//         CAA AAW WZ            JP PAE
//       AT TN NR RB          YO OS SI IE
//       DM MU UK KV         OEG FG FH HL
//  6: COMMA , SEMICOLON ; DOT . COLON : QUESTION ? EXCLAMATION !
//  4: DASH - UNDERSCORE _ QUOTE ' DOUBLEQUOTE "
// 10: ET & TILDE ~ SLASH / PIPE | BACKSLASH \ AT @ ASTERIX * EQUAL = PERCENT % HASH #
    CAA_HASH, AAW_PERCENT, WZ_PLUS,
    PAE_ASTERIX, JP_AT,
    AT_QUESTION, TN_SEMICOLON, NR_COMMA, RB_UNDERSCORE,
    IE_EXCLAMATION, SI_COLON, OS_DOT, YO_DASH,
    DM_QUOTE, MU_SLASH, UK_PIPE, KV_BACKSLASH,
    HL_DOUBLEQUOTE, FH_TILDE, FG_ET, OEG_EQUAL,
// Split pairs - minus C & AA (10)
// XQ, WJ,
// AE, TI, NS, RO, BY
// DL, MH, UF, KG, VOE
// 8: LESS < GREATER > LPAREN ( RPAREN ) LBRACE { RBRACE } LBRACKET [ RBRACKET ]
// 2: UNDO REDO
    WJ_REDO,
    AE_LESS, TI_LPAREN, NS_LBRACE, RO_LBRACKET, BY_UNDO,
    DL_GREATER, MH_RPAREN, UF_RBRACE, KG_RBRACKET, VOE_SAVE,
// C - Pairs (14)
// CJ, CP, CAE, CQ
// CY, CO, CS, CI, CE
// COE, CG, CF, CH, CL
// 4: CIRCUMFLEX ^ UMLAUT ¨ AACUTE ´ AGRAVE `
// 3: CUT COPY PASTE
// 5: POUND £ DOLLAR $ EURO € PARAGRAPH § DEGREE °
    CAE_AACUTE, CQ_AGRAVE, CJ_COPY, CO_CUT, CG_PASTE, CS_CIRCUMFLEX, CI_UMLAUT,
    COE_DEGREE, CF_DOLLAR, CH_EURO, CL_POUND, CY_PARAGRAPH,
// AA - Pairs (14)
// AAJ, AAP, AAAE, AAQ
// AAY, AAO, AAS, AAI, AAE
// AAOE, AAG, AAF, AAH, AAL
// 8: UP DOWN LEFT RIGHT PAGEUP PAGEDOWN END HOME
    AAP_UP, AAS_DOWN, AAO_LEFT, AAI_RIGHT,
    AAJ_HOME, AAAE_END, AAE_PAGEUP, AAL_PAGEDOWN
};

combo_t key_combos[COMBO_COUNT] = {
//5
  	[CAA_HASH] = COMBO(caa_combo, KC_HASH),
	[AAW_PERCENT] = COMBO(aaw_combo, KC_PERCENT),
	[WZ_PLUS] = COMBO(wz_combo, NO_PLUS),
	[PAE_ASTERIX] = COMBO(pae_combo, NO_ASTR),
	[JP_AT] = COMBO(jp_combo, NO_AT),
// 16
	[AT_QUESTION] = COMBO(at_combo, NO_QUES),
	[TN_SEMICOLON] = COMBO(tn_combo, NO_SCLN),
	[NR_COMMA] = COMBO(nr_combo, KC_COMM),
	[RB_UNDERSCORE] = COMBO(rb_combo, NO_UNDS),
	[IE_EXCLAMATION] = COMBO(ie_combo, KC_EXLM),
	[SI_COLON] = COMBO(si_combo, NO_COLN),
	[OS_DOT] = COMBO(os_combo, KC_DOT),
	[YO_DASH] = COMBO(yo_combo, NO_MINS),
	[DM_QUOTE] = COMBO(dm_combo, NO_APOS),
	[MU_SLASH] = COMBO(mu_combo, NO_SLSH),
	[UK_PIPE] = COMBO(uk_combo, NO_PIPE),
	[KV_BACKSLASH] = COMBO(kv_combo, NO_BSLS),
	[HL_DOUBLEQUOTE] = COMBO(hl_combo, NO_QUO2),
	[FH_TILDE] = COMBO(fh_combo, NO_TILD),
	[FG_ET] = COMBO(fg_combo, NO_AMPR),
	[OEG_EQUAL] = COMBO(oeg_combo, NO_EQL),
// 4 -- 25
//	[WJ_REDO] = COMBO(wj_combo, KC_REDO), // Ctrl + Y
	[AE_LESS] = COMBO(ae_combo, NO_LESS),
	[TI_LPAREN] = COMBO(ti_combo, NO_LPRN),
	[NS_LBRACE] = COMBO(ns_combo, NO_LCBR),
	[RO_LBRACKET] = COMBO(ro_combo, NO_LBRC),
//	[BY_UNDO] = COMBO(by_combo, KC_UNDO), // Ctrl + Z
// 4
	[DL_GREATER] = COMBO(dl_combo, NO_GRTR),
	[MH_RPAREN] = COMBO(mh_combo, NO_RPRN),
	[UF_RBRACE] = COMBO(uf_combo, NO_RCBR),
	[KG_RBRACKET] = COMBO(kg_combo, NO_RBRC),
//	[VOE_SAVE] = COMBO(voe_combo, KC_SAVE), // Ctrl + S
// 2
	[CAE_AACUTE] = COMBO(cae_combo, NO_ACUT),
	[CQ_AGRAVE] = COMBO(cq_combo, NO_GRV),
//	[CJ_COPY] = COMBO(cj_combo, KC_COPY), // Ctrl + C
//	[CO_CUT] = COMBO(co_combo, KC_CUT),   // Ctrl + X
//	[CG_PASTE] = COMBO(cg_combo, KC_PASTE), // Ctrl + V
// 6 -- 37
	[CS_CIRCUMFLEX] = COMBO(cs_combo, NO_CIRC),
	[CI_UMLAUT] = COMBO(ci_combo, NO_QUOT),
	[COE_DEGREE] = COMBO(coe_combo, NO_BULT),
	[CF_DOLLAR] = COMBO(cf_combo, NO_DLR),
	[CH_EURO] = COMBO(ch_combo, NO_EURO),
	[CL_POUND] = COMBO(cl_combo, NO_PND),
// 1
	[CY_PARAGRAPH] = COMBO(cy_combo, NO_SECT),
// 8 -- 46
	[AAP_UP] = COMBO(aap_combo, KC_UP),
	[AAS_DOWN] = COMBO(aas_combo, KC_DOWN),
	[AAO_LEFT] = COMBO(aao_combo, KC_LEFT),
	[AAI_RIGHT] = COMBO(aai_combo, KC_RGHT),
	[AAJ_HOME] = COMBO(aaj_combo, KC_HOME),
	[AAAE_END] = COMBO(aaae_combo, KC_END),
	[AAE_PAGEUP] = COMBO(aae_combo, KC_PGUP),
	[AAL_PAGEDOWN] = COMBO(aal_combo, KC_PGDN)
};

/* end COMBO_ENABLE */
