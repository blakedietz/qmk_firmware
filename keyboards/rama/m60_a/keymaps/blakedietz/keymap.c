// M60-A layout
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

#define _BASE 0
#define _SYMBOL 1
#define _DEV 2
#define _MEDIA 3
#define _MOUSE 4
#define _GAME 5
#define _NUMBER 6
#define _LIGHT 7

#define ALT_DOT     ALT_T(KC_DOT)
#define ALT_X       ALT_T(KC_X)

#define CTL_SLSH    CTL_T(KC_SLSH)
#define CTL_Z       CTL_T(KC_Z)

#define GUI_C       GUI_T(KC_C)
#define GUI_COMM    GUI_T(KC_COMM)

#define HPR_ESC     ALL_T(KC_ESC)
#define HPR_QUO     ALL_T(KC_QUOT)
#define HPR_ENT     ALL_T(KC_ENT)

#define HPR_LATCH  ALL_T(KC_NO)

// Toggle to VIM when left space button is held, emit space keycode when left space is tapped
#define TGL_DEV LT(_DEV, KC_SPC)
// Toggle to MEDIA layer
#define TGL_MEDIA LT(_MEDIA, KC_SCLN)
// Toggle to the mouse layer when the right space button is held and emit enter when right space is tapped
#define TGL_MOUSE LT(_MOUSE, KC_ENT)

#define TG_GAME TG(_GAME, KC_ENT)

#define _______ KC_TRNS

// Default layer
[_BASE] = LAYOUT_60_hhkb(
    KC_GRV,        KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,  KC_9,     KC_0,     KC_MINS,  KC_EQL,    KC_BSPC,  TG(_GAME),
    KC_TAB,        KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,  KC_O,     KC_P,     KC_LBRC,  KC_RBRC,   KC_BSLS,
    HPR_ESC, KC_A,  KC_S,  KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,  KC_L,     TGL_MEDIA,  KC_QUOT,  HPR_ENT,
    KC_LSFT,       CTL_Z,  ALT_X,  GUI_C,  KC_V,  KC_B,  KC_N,     KC_M,  GUI_COMM,  ALT_DOT,  CTL_SLSH, KC_RSFT,  TG(_LIGHT),
        TG(_DEV), TG(_MOUSE),                              TGL_DEV, TG(_MOUSE),              TG(_DEV)),


[_DEV] = LAYOUT_60_hhkb(
         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
         KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_TRNS, KC_TRNS, KC_TRNS,
         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

[_MOUSE] = LAYOUT_60_hhkb(
         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
         KC_TRNS, KC_TRNS, KC_TRNS, KC_MS_U, KC_TRNS, KC_TRNS, KC_TRNS, KC_WH_D, KC_WH_U, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
         KC_TRNS, KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_TRNS, KC_TRNS, KC_BTN1, KC_BTN2, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_ACL2, KC_ACL1, KC_ACL0, KC_TRNS, KC_TRNS, KC_TRNS,
         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

[_MEDIA] = LAYOUT_60_hhkb(
         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MPRV, KC_MNXT, KC_MPLY, KC_TRNS, KC_TRNS, KC_TRNS,
         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_VOLD, KC_VOLU, KC_MUTE, KC_TRNS, KC_TRNS, KC_TRNS,
         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

[_GAME] = LAYOUT_60_hhkb(
    KC_GRV, KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,  KC_9, KC_0,     KC_MINS,  KC_EQL,    KC_BSPC,  TG(_GAME),
    KC_TAB, KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,  KC_O, KC_P,     KC_LBRC,  KC_RBRC,   KC_BSLS,
    KC_ESC, KC_A,  KC_S,  KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,  KC_L, LT(_MEDIA, KC_SCLN),  KC_QUOT,  KC_ENT,
    KC_LSFT,KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,  KC_N,     KC_M,  KC_COMM,  KC_DOT,  KC_SLSH, KC_RSFT,  TG(_LIGHT),
        TG(_DEV), TG(_MOUSE),                              KC_SPC, TG(_MOUSE), TG(_DEV)),

[_LIGHT] = LAYOUT_60_hhkb(
      KC_TRNS, EF_DEC,  EF_INC,  H1_DEC,  H1_INC,  H2_DEC,  H2_INC,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, BR_DEC,  BR_INC,  KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, S1_DEC,  S1_INC,  S2_DEC,  S2_INC,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, ES_DEC,  ES_INC,  KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
               KC_TRNS, KC_TRNS,                            KC_TRNS,                            KC_TRNS, KC_TRNS),
};


