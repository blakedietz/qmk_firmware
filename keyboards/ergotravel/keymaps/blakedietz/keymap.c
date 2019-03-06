#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 16
#define _MOUSE 6

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
};

// #define KC_ KC_TRNS
#define _______ KC_TRNS
#define CALTDEL LCTL(LALT(KC_DEL))
#define TSKMGR LCTL(LSFT(KC_ESC))

#define ALT_DOT     ALT_T(KC_DOT)
#define ALT_X       ALT_T(KC_X)

#define CTL_SLSH    CTL_T(KC_SLSH)
#define CTL_Z       CTL_T(KC_Z)

#define GUI_C       GUI_T(KC_C)
#define GUI_COMM    GUI_T(KC_COMM)

#define HPR_ESC     ALL_T(KC_ESC)
#define HPR_QUO     ALL_T(KC_QUOT)

#define HPR_LATCH  ALL_T(KC_NO)

// Toggle to VIM when left space button is held, emit space keycode when left space is tapped
#define TGL_DEV LT(_DEV, KC_SPC)
// Toggle to MEDIA layer
#define TGL_MEDIA LT(_MEDIA, KC_SCLN)
// Toggle to the mouse layer when the right space button is held and emit enter when right space is tapped
#define TGL_MOUSE LT(_MOUSE, KC_ENT)

#define _______ KC_TRNS


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
     KC_EQL,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    RAISE,                 RAISE, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
     HPR_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    ALL_T(KC_NO),          ALL_T(KC_NO)  , KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, HPR_QUO,
     KC_LSFT,  CTL_Z   ,    ALT_X,    GUI_C,    KC_V,    KC_B,    LOWER,           LOWER,  KC_N,    KC_M,    GUI_COMM, ALT_DOT,  CTL_SLSH, KC_LSFT,
     KC_GRV,  KC_LGUI, KC_LPRN, KC_RPRN,                  KC_BSPC,KC_SPC,           KC_ENT,  KC_TAB ,            KC_LBRC, KC_RBRC,   KC_DOWN, KC_RGHT
  ),

  [_LOWER] = LAYOUT(
  KC_TILD, KC_EXLM,  KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_HOME,          KC_PGUP,     KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL,  \
  _______, KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_END ,          KC_PGDN,     KC_F6,   KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_BSLS, \
  _______, KC_F7,    KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_BSPC,          KC_BSPC,     KC_F12,  _______, _______, KC_MUTE, _______, KC_PIPE, \
  _______, _______,  _______, _______, _______, KC_BSPC,                                KC_BSPC, _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY  \

  ),

  [_RAISE] = LAYOUT(
 
  KC_ESC,  KC_1,    KC_2,  KC_3,   KC_4,    KC_5,     _______,          _______,     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,  \
  _______, KC_4,    KC_5,  KC_6,   KC_PLUS, _______,  _______,          _______,   _______,   KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, _______, \
  KC_ENT,  KC_7,    KC_8,  KC_9,   KC_MINS, _______,  _______,          _______,   _______,   KC_NUHS, KC_NUBS, KC_MUTE, _______, KC_BSLS, \
  _______, KC_COMM, KC_0,  KC_DOT, _______, KC_BSPC,                                 KC_BSPC, _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY  \
  
  ),

  [_ADJUST] = LAYOUT(
     TSKMGR,  _______,  _______, _______, _______, _______, _______,         _______,  _______, RGB_MOD, RGB_VAI, RGB_SAI, RGB_HUI, CALTDEL,
     _______, _______,  _______, _______, _______, _______, _______,         _______,  _______, RGB_RMOD, RGB_VAD, RGB_SAD, RGB_HUD, RGB_TOG,
     _______, _______,  _______, _______, _______, _______, _______,         _______,  _______, _______, _______, _______, _______, BL_STEP,
     _______, _______, _______, _______,           _______, _______,         _______,  _______,          _______, _______, _______, RESET
  ),

  [_MOUSE] = LAYOUT(
     _______, _______,  _______, _______, _______, _______, _______,         _______,  _______, _______, _______, _______, _______, _______,
     _______, _______,  _______, _______, _______, _______, _______,         _______,  _______, _______, _______, _______, _______, _______,
     _______, _______,  _______, _______, _______, _______, _______,         _______,  _______, _______, _______, _______, _______, _______,
     _______, _______, _______, _______,           _______, _______,         _______,  _______,          _______, _______, _______, _______
  )
//  [_MOUSE] = LAYOUT(
//     _______, _______,  _______, _______, _______, _______, _______,         _______,  _______, _______, _______, _______, _______, _______,
//     _______, _______,  _______, _______, _______, _______, _______,         _______,  _______, _______, _______, _______, _______, _______,
//     _______, _______,  _______, _______, _______, _______, _______,         _______,  _______, _______, _______, _______, _______, _______,
//     _______, _______, _______, _______,           _______, _______,         _______,  _______,          _______, _______, _______, _______
//  )
};







bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        #ifdef AUDIO_ENABLE
          PLAY_SONG(tone_qwerty);
        #endif
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
      break;
  }
  return true;
}
