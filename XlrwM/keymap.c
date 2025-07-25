#include QMK_KEYBOARD_H
#include "version.h"

#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
};


enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_EQUAL,
    KC_GRAVE,       KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           TT(1),                                          KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_MINUS,
    MT(MOD_LCTL, KC_TAB),KC_A,           KC_S,           KC_D,           MT(MOD_LSFT, KC_F),KC_G,                                                                           KC_H,           MT(MOD_LSFT, KC_J),KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_C,           LT(2, KC_V),    KC_B,           MO(2),                                          KC_TRANSPARENT, KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_BSLS,
    LM(5,MOD_LGUI), KC_MEH,         KC_TRANSPARENT, MO(6),          MT(MOD_LCTL, KC_ESCAPE),                                                                                                MT(MOD_LSFT, KC_ESCAPE),MO(2),          MT(MOD_LGUI, KC_SPACE),KC_TRANSPARENT, ST_MACRO_0,
                                                                                                    KC_BSPC,        LM(3,MOD_LGUI), KC_SCRL,        KC_ESCAPE,
                                                                                                                    LGUI(KC_ENTER), LM(6,MOD_LGUI),
                                                                                    MT(MOD_LSFT, KC_SPACE),MT(MOD_LGUI, KC_ENTER),KC_LEFT_ALT,    MO(6),          LT(3, KC_ENTER),KC_BSPC
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_GRAVE,       KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        KC_AUDIO_VOL_DOWN,                                KC_AUDIO_VOL_UP,KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RPRN,        KC_MINUS,
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 TG(5),          KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,
    KC_TAB,         KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           LT(4, KC_K),    KC_L,           KC_SCLN,        KC_QUOTE,
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           LT(3, KC_V),    KC_B,           TG(5),                                          DM_PLY1,        KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_UNDS,
    KC_TAB,         KC_LEFT_GUI,    KC_TRANSPARENT, KC_ESCAPE,      KC_LEFT_ALT,                                                                                                    KC_ENTER,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_LEFT_GUI,    KC_TRANSPARENT, KC_PAUSE,       ST_MACRO_1,
                                                                                                                    KC_HOME,        KC_TRANSPARENT,
                                                                                    MT(MOD_LCTL, KC_SPACE),LT(5, KC_ESCAPE),KC_DELETE,      LSFT(KC_ENTER), KC_TRANSPARENT, KC_BSPC
  ),
  [2] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    KC_TRANSPARENT, DM_REC1,        KC_LPRN,        KC_RPRN,        KC_BSLS,        KC_PIPE,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           KC_EQUAL,       KC_F12,
    KC_TRANSPARENT, DM_PLY1,        KC_LCBR,        KC_RCBR,        KC_EQUAL,       KC_PLUS,                                                                        KC_TRANSPARENT, KC_4,           KC_5,           KC_6,           KC_PLUS,        KC_MINUS,
    KC_TRANSPARENT, DM_RSTP,        KC_LBRC,        KC_RBRC,        KC_TRANSPARENT, KC_MINUS,       KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           ST_MACRO_2,     KC_TRANSPARENT,
    KC_TRANSPARENT, KC_EQUAL,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_0,           KC_TRANSPARENT, KC_DOT,         KC_DOT,         KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_DELETE
  ),
  [3] = LAYOUT_ergodox_pretty(
    QK_BOOT,        KC_TRANSPARENT, KC_LCBR,        KC_RCBR,        KC_LBRC,        KC_RBRC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_W),     LCTL(KC_E),     KC_TRANSPARENT, LCTL(KC_T),     LGUI(KC_UP),                                    KC_TRANSPARENT, TD(DANCE_0),    LCTL(KC_U),     TD(DANCE_1),    KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT,
    KC_TRANSPARENT, LCTL(KC_A),     KC_TRANSPARENT, LCTL(KC_D),     LCTL(KC_F),     KC_TRANSPARENT,                                                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_C),     KC_TRANSPARENT, LCTL(KC_B),     LGUI(KC_DOWN),                                  KC_TRANSPARENT, KC_DOWN,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_ALT,    KC_LEFT_CTRL,                                                                                                   KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_SPACE,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_SPACE
  ),
  [5] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_4,           KC_5,           KC_6,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_ENTER,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    ST_MACRO_3,     ST_MACRO_4,     ST_MACRO_5,     KC_LABK,        KC_RABK,        KC_DQUO,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MINUS,       KC_LCBR,        KC_RCBR,        KC_DLR,         KC_PIPE,        KC_TRANSPARENT,
    ST_MACRO_6,     KC_EXLM,        KC_UNDS,        KC_PLUS,        KC_EQUAL,       KC_HASH,                                                                        KC_CIRC,        KC_LPRN,        KC_RPRN,        KC_SCLN,        KC_COLN,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TILD,        KC_SLASH,       KC_ASTR,        KC_BSLS,        KC_AMPR,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_PERC,        KC_LBRC,        KC_RBRC,        KC_GRAVE,       KC_AT,          KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


// const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT_ergodox(
//   'L', 'L', 'L', 'L', 'L', 'L', 'L', 
//   'L', 'L', 'L', 'L', 'L', 'L', 'L', 
//   'L', 'L', 'L', 'L', 'L', 'L', 
//   'L', 'L', 'L', 'L', 'L', 'L', 'L', 
//   'L', 'L', 'L', 'L', 'L',
//   '*', '*',
//   '*', '*', '*', '*',
//   'R', 'R', 'R', 'R', 'R', 'R', 'R', 
//   'R', 'R', 'R', 'R', 'R', 'R', 'R', 
//   'R', 'R', 'R', 'R', 'R', 'R', 
//   'R', 'R', 'R', 'R', 'R', 'R', 'R', 
//   'R', 'R', 'R', 'R', 'R', 
//   '*', '*',
//   '*', '*', '*', '*'
// );
const uint16_t PROGMEM combo0[] = { KC_A, KC_S, KC_D, MT(MOD_LSFT, KC_F), COMBO_END};
const uint16_t PROGMEM combo1[] = { MT(MOD_LSFT, KC_J), KC_K, KC_L, KC_SCLN, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_LPRN, KC_RPRN, KC_SCLN, KC_COLN, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_TILD, KC_SLASH, KC_ASTR, KC_BSLS, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_ESCAPE),
    COMBO(combo1, LCTL(KC_A)),
    COMBO(combo2, ST_MACRO_7),
    COMBO(combo3, ST_MACRO_8),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT_ergodox_pretty(
    'L', 'L',           'L',           'L',           'L',           'L',           'L',
    'R','R',           'R',           'R',           'R',           'R',           'R',
    'L',       'L',           'L',           'L',           'L',           'L',           'L',
  'R','R',           'R',           'R',           'R',           'R',           'R',
    'L','L',           'L',           'L',           'L','L',
  'R',           'R','R',           'R',           'R',        'R',
    'L',  'L',           'L',           'L',           'L',    'L',           'L',
  'R','R',           'R',           'R',       'R',         'R',       'R',
    'L', 'L',         '*', '*',    '*',
  '*','*', '*', 'R', 'R',
                                                                                                    '*',      '*',        '*',        '*',
                                                                                                                    '*', '*',
                                                                                    '*',       '*','*', '*',        '*','*'
  );

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LSFT, KC_F):
            return TAPPING_TERM -60;
        case LT(2, KC_V):
            return TAPPING_TERM -60;
        case MT(MOD_LCTL, KC_ESCAPE):
            return TAPPING_TERM -65;
        case MT(MOD_LSFT, KC_SPACE):
            return TAPPING_TERM -30;
        case MT(MOD_LGUI, KC_ENTER):
            return TAPPING_TERM -20;
        case MT(MOD_LSFT, KC_J):
            return TAPPING_TERM -60;
        case LT(3, KC_ENTER):
            return TAPPING_TERM -20;
        case KC_BSPC:
            return TAPPING_TERM + 50;
        case MT(MOD_LCTL, KC_SPACE):
            return TAPPING_TERM -65;
        default:
            return TAPPING_TERM;
    }
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_A))SS_DELAY(20)  SS_TAP(X_LBRC));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_F4))SS_DELAY(100)  SS_TAP(X_M)SS_DELAY(100)  SS_TAP(X_BSPC)SS_DELAY(100)  SS_LALT(SS_TAP(X_A)));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_EQUAL)SS_DELAY(100)  SS_LSFT(SS_TAP(X_DOT)));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_D)SS_DELAY(20)  SS_TAP(X_O)SS_DELAY(20)  SS_TAP(X_N)SS_DELAY(20)  SS_TAP(X_SLASH));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_S))SS_DELAY(20)  SS_LSFT(SS_TAP(X_I))SS_DELAY(20)  SS_LSFT(SS_TAP(X_G))SS_DELAY(20)  SS_TAP(X_MINUS));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_EQUAL)SS_DELAY(20)  SS_LSFT(SS_TAP(X_DOT)));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_G)SS_DELAY(5)  SS_TAP(X_O)SS_DELAY(5)  SS_TAP(X_SLASH));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_LBRC)SS_DELAY(5)  SS_TAP(X_RBRC)SS_DELAY(5)  SS_LSFT(SS_TAP(X_9))SS_DELAY(5)  SS_LSFT(SS_TAP(X_0))SS_DELAY(5)  SS_TAP(X_LEFT)SS_DELAY(5)  SS_TAP(X_LEFT)SS_DELAY(5)  SS_TAP(X_LEFT));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_A))SS_DELAY(5)  SS_TAP(X_RBRC));
    }
    break;

  }
  return true;
}

uint8_t layer_state_set_user(uint8_t state) {
    uint8_t layer = biton(state);
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[2];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_HOME);
        tap_code16(KC_HOME);
        tap_code16(KC_HOME);
    }
    if(state->count > 3) {
        tap_code16(KC_HOME);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_HOME); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_HOME)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_HOME); register_code16(KC_HOME);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_HOME); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_HOME)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_HOME); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_END);
        tap_code16(KC_END);
        tap_code16(KC_END);
    }
    if(state->count > 3) {
        tap_code16(KC_END);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_END); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_END)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_END); register_code16(KC_END);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_END); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_END)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_END); break;
    }
    dance_state[1].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
};

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // for some reason DUAL_FUNC_0 can't be used here
        case LT(12, KC_F1):
        case LT(3, KC_ENTER):
        case MT(MOD_LCTL, KC_ESCAPE):
        case MT(MOD_LSFT, KC_ESCAPE):
            // Immediately select the hold action when another key is pressed.
            return true;
        default:
            // Do not select the hold action when another key is pressed.
            return false;
    }
}
