#include "iris.h"
#include "keymap_swedish.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

///// Layer definitions

// Named layers
#define _BASE  0
#define _SYMB  1
#define _CODE  2
#define _FNCT  4
#define _MOVE  7
#define _MOUS  8
#define _CTRL  9
#define _MIDI 10

#define BASE TO(_BASE)
#define SYMB TO(_SYMB)
#define CODE TO(_CODE)
#define FNCT TO(_FNCT)
#define MOVE TO(_MOVE)
#define MOUS TO(_MOUS)
#define CTRL TO(_CTRL)
#define MIDI TO(_MIDI)
///// Special key definitioins
// Three outer keys on the left hand side
#define LEUPR MT(MOD_LALT, KC_ESC)
#define LEMID KC_LCTRL
#define LELOW TO(_BASE)
// Three outer keys on the right hand side
#define RIUPR KC_RGUI
#define RIMID KC_RALT
#define RILOW KC_RSHIFT
// Three thumb keys on the left hand side
#define LETIN LT(_FNCT, KC_BSPACE)
#define LETHO LT(_CODE, KC_ENTER)
#define LETOT LT(_CTRL, KC_LEAD)
// Three thumb keys on the right hand side
#define RITIN LT(_MOVE, KC_TAB)
#define RITHO LT(_SYMB, KC_SPACE)
#define RITOT LT(_MOUS, KC_DEL)

#define MS_UP KC_MS_UP
#define MS_DOWN KC_MS_DOWN
#define MS_LEFT KC_MS_LEFT
#define MS_RGHT KC_MS_RIGHT

#define MS_BTN1 KC_MS_BTN1
#define MS_BTN2 KC_MS_BTN2
#define MS_BTN3 KC_MS_BTN3
#define MS_BTN4 KC_MS_BTN4
#define MS_BTN5 KC_MS_BTN5

#define MS_SCUP KC_MS_WH_UP
#define MS_SCDN KC_MS_WH_DOWN
#define MS_SCLE KC_MS_WH_LEFT
#define MS_SCRI KC_MS_WH_RIGHT

#define MS_ACC0 KC_MS_ACCEL0
#define MS_ACC1 KC_MS_ACCEL1
#define MS_ACC2 KC_MS_ACCEL2

#define NO_PERC LSFT(KC_5)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
    KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                 KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    LEUPR, KC_LOCK, KC_C,    NO_AA,   KC_W,    KC_Z,                  KC_X,    KC_J,    KC_P,    NO_AE,   KC_Q,    RIUPR,
    LEMID, KC_A,    KC_T,    KC_N,    KC_R,    KC_B,                  KC_Y,    KC_O,    KC_S,    KC_I,    KC_E,    RIMID,
    LELOW, KC_D,    KC_M,    KC_U,    KC_K,    KC_V,    KC_NO, KC_NO, NO_OSLH, KC_G,    KC_F,    KC_H,    KC_L,    RILOW,
                                         LETIN, LETHO, LETOT,   RITOT, RITHO, RITIN),
  [_SYMB] = LAYOUT(
    KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                 KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    LEUPR, NO_ACUT, NO_LPRN, NO_LCBR, NO_LBRC, NO_CIRC,               NO_TILD, NO_RBRC, NO_RCBR, NO_RPRN, NO_GRV,  RIUPR,
    LEMID, NO_AT,   NO_EQL,  NO_PLUS, NO_ASTR, NO_LESS,               NO_GRTR, NO_SLSH, NO_PIPE, NO_BSLS, NO_AMPR, RIMID,
    LELOW, NO_APOS, NO_QUES, KC_COMM, NO_SCLN, NO_MINS, KC_NO, KC_NO, NO_UNDS, NO_COLN, KC_DOT,  KC_EXLM, NO_QUO2, RILOW,
                                         LETIN, LETHO, LETOT,   RITOT, RITHO, RITIN),
  [_CODE] = LAYOUT(
    KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                 KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    LEUPR, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                 KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  RIUPR,
    LEMID, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    RIMID,
    LELOW, NO_QUOT, NO_SECT, NO_HALF, NO_PERC, KC_NO,   KC_NO, KC_NO, NO_BULT, KC_HASH, NO_DLR,  NO_PND,  NO_EURO, RILOW,
                                         LETIN, LETHO, LETOT,   RITOT, RITHO, RITIN),
  [_FNCT] = LAYOUT(
    KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                 KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    LEUPR, KC_F21,  KC_F22,  KC_F23,  KC_F24,  KC_NO,                 KC_NO,   KC_NO,   KC_CAPS, KC_NO,   KC_NO,   RIUPR,
    LEMID, KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,                KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  RIMID,
    LELOW, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_NO, KC_NO, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  RILOW,
                                         LETIN, LETHO, LETOT,   RITOT, RITHO, RITIN),
  [_MOVE] = LAYOUT(
    KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                 KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    LEUPR, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                 KC_NO,   KC_HOME, KC_UP,   KC_END,  KC_NO,   RIUPR,
    LEMID, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                 KC_PGUP, KC_LEFT, KC_DOWN, KC_RGHT, KC_MEH,  RIMID,
    LELOW, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_PGDN, KC_NO,   KC_NO,   KC_NO,   KC_LCTL, RILOW,
                                         LETIN, LETHO, LETOT,   RITOT, RITHO, RITIN),
  [_MOUS] = LAYOUT(
    KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                 KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    LEUPR, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                 MS_ACC2, MS_BTN4, MS_UP,   MS_BTN5, KC_NO,   RIUPR,
    LEMID, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                 MS_ACC0, MS_LEFT, MS_DOWN, MS_RGHT, MS_SCUP, RIMID,
    LELOW, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, MS_ACC1, MS_BTN1, MS_BTN2, MS_BTN3, MS_SCDN, RILOW,
                                         LETIN, LETHO, LETOT,   RITOT, RITHO, RITIN),
  [_CTRL] = LAYOUT(
    KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                 KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    LEUPR, KC_NO,   KC_MPRV, KC_MNXT, KC_MSTP, KC_MPLY,               KC_WHOM, KC_WFAV, KC_NO,   KC_NO,   KC_NO,   RIUPR,
    LEMID, SYMB,    CODE,    KC_NO,   FNCT,    KC_NO,                 KC_NO,   MOVE,    MOUS,    CTRL,    MIDI,    RIMID,
    LELOW, KC_MPRV, KC_MNXT, KC_VOLD, KC_VOLU, KC_MUTE, KC_NO, KC_NO, KC_WSCH, KC_WBAK, KC_WREF, KC_WSTP, KC_WFWD, RILOW,
                                         LETIN, LETHO, LETOT,   RITOT, RITHO, RITIN),
  [_MIDI] = LAYOUT(
    KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                 KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    LEUPR, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                 KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   RIUPR,
    LEMID, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                 KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   RIMID,
    LELOW, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   RILOW,
                                         LETIN, LETHO, LETOT,   RITOT, RITHO, RITIN)
};

LEADER_EXTERNS();

void matrix_scan_user(void) {
  LEADER_DICTIONARY() {
    leading = false;
    leader_end();

    SEQ_ONE_KEY(KC_V) {
      // Anything you can do in a macro.
      SEND_STRING("QMK is awesome.");
    }

    SEQ_TWO_KEYS(KC_V, KC_V) {
      SEND_STRING("Godmorgon!");
    }
    SEQ_TWO_KEYS(KC_V, KC_K) {
      SEND_STRING("Hur är det?");
    }
    SEQ_TWO_KEYS(KC_D, KC_D) {
      SEND_STRING(SS_LCTRL("a")SS_LCTRL("c"));
    }
    SEQ_THREE_KEYS(KC_D, KC_D, KC_S) {
      SEND_STRING("https://start.duckduckgo.com"SS_TAP(X_ENTER));
    }
    SEQ_TWO_KEYS(KC_A, KC_S) {
      register_code(KC_LGUI);
      register_code(KC_S);
      unregister_code(KC_S);
      unregister_code(KC_LGUI);
    }
  }
}
