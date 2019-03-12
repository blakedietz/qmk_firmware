#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _BASE 0
#define _SYMBOL 1
#define _NUMBER 2
#define _DEV  3
#define _MEDIA 4
#define _MOUSE 5

#define _______ KC_TRNS

#define ALT_DOT     ALT_T(KC_DOT)
#define ALT_X       ALT_T(KC_X)

#define CTL_SLSH    CTL_T(KC_SLSH)
#define CTL_Z       CTL_T(KC_Z)

#define GUI_C       GUI_T(KC_C)
#define GUI_COMM    GUI_T(KC_COMM)

#define HPR_ESC     ALL_T(KC_ESC)
#define HPR_QUO     ALL_T(KC_QUOT)

#define HPR_NO  ALL_T(KC_NO)

// Toggle to VIM when left space button is held, emit space keycode when left space is tapped
#define TGL_DEV LT(_DEV, KC_SPC)
// Toggle to MEDIA layer
#define TGL_MEDIA LT(_MEDIA, KC_SCLN)
// Toggle to the mouse layer when the right space button is held and emit enter when right space is tapped
#define TGL_MOUSE LT(_MOUSE, KC_ENT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
     // @kbd-prettier:start
     KC_EQL      ,KC_Q        ,KC_W        ,KC_E        ,KC_R        ,KC_T        ,TT(_NUMBER) ,TT(_NUMBER) ,KC_Y        ,KC_U        ,KC_I        ,KC_O        ,KC_P        ,KC_BSLS     ,
     HPR_ESC     ,KC_A        ,KC_S        ,KC_D        ,KC_F        ,KC_G        ,HPR_NO      ,HPR_NO      ,KC_H        ,KC_J        ,KC_K        ,KC_L        ,TGL_MEDIA   ,HPR_QUO     ,
     KC_LSFT     ,CTL_Z       ,ALT_X       ,GUI_C       ,KC_V        ,KC_B        ,TT(_SYMBOL) ,TT(_SYMBOL) ,KC_N        ,KC_M        ,GUI_COMM    ,ALT_DOT     ,CTL_SLSH    ,KC_LSFT     ,
     KC_GRV      ,KC_LPRN     ,KC_RPRN     ,MEH_T(KC_NO),             KC_BSPC     ,TGL_DEV     ,TGL_MOUSE   ,KC_TAB      ,             MEH_T(KC_NO),KC_LBRC     ,KC_RBRC     ,KC_RGHT     
     // @kbd-prettier:end
  ),
  [_SYMBOL] = LAYOUT(
   // @kbd-prettier:start
   _______,KC_EXLM,KC_AT  ,KC_HASH,KC_DLR ,KC_PERC,_______,_______,KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_MINS,
   KC_UNDS,KC_DLR ,KC_PERC,KC_CIRC,_______,KC_PLUS,_______,_______,KC_PLUS,KC_DLR ,KC_PERC,KC_CIRC,_______,KC_UNDS,
   KC_MINS,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_EQL ,_______,_______,KC_EQL ,KC_EXLM,KC_AT  ,KC_HASH,_______,KC_MINS,
   _______,_______,_______,_______,        _______,_______,_______,_______,        _______,_______,_______,_______
   // @kbd-prettier:end
  ),
  [_NUMBER] = LAYOUT(
  // @kbd-prettier:start
  _______,KC_1   ,KC_2   ,KC_3   ,KC_4   ,KC_5   ,_______,_______,KC_6   ,KC_7   ,KC_8   ,KC_9   ,KC_0   ,_______,
  _______,KC_4   ,KC_5   ,KC_6   ,_______,_______,_______,_______,_______,KC_4   ,KC_5   ,KC_6   ,_______,_______,
  _______,KC_7   ,KC_8   ,KC_9   ,KC_0   ,_______,_______,_______,_______,KC_1   ,KC_2   ,KC_3   ,_______,_______,
  _______,_______,_______,_______,        _______,_______,_______,_______,        _______,_______,_______,_______
  // @kbd-prettier:end
  ),
  [_DEV] = LAYOUT(
  _______ ,KC_F11  ,KC_F12  ,KC_F13  ,KC_F14  ,KC_F15  ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
  _______ ,KC_F1   ,KC_F2   ,KC_F3   ,KC_F4   ,KC_F5   ,_______ ,_______ ,KC_LEFT ,KC_DOWN ,KC_UP   ,KC_RIGHT,_______ ,_______ ,
  _______ ,KC_F6   ,KC_F7   ,KC_F8   ,KC_F9   ,KC_F10  ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
  _______ ,_______ ,_______ ,_______ ,         _______ ,_______ ,_______ ,_______ ,         _______ ,_______ ,_______ ,_______
  ),
  [_MEDIA] = LAYOUT(
  // @kbd-prettier:start
  _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
  _______,_______,_______,_______,_______,_______,_______,_______,_______,KC_MPRV,KC_MNXT,KC_MPLY,_______,_______,
  _______,_______,_______,_______,_______,_______,_______,_______,_______,KC_VOLD,KC_VOLU,KC_MUTE,_______,_______,
  _______,_______,_______,_______,        _______,_______,_______,_______,        _______,_______,_______,_______
  // @kbd-prettier:end
  ),
  [_MOUSE] = LAYOUT(
  // @kbd-prettier:start
  _______ ,_______ ,_______ ,KC_MS_UP,_______ ,_______ ,_______ ,_______ ,_______ ,KC_WH_D ,KC_WH_U ,_______ ,_______ ,_______ ,
  _______ ,_______ ,KC_MS_L ,KC_MS_D ,KC_MS_R ,_______ ,_______ ,_______ ,_______ ,KC_BTN1 ,KC_BTN2 ,_______ ,_______ ,_______ ,
  _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,KC_ACL2 ,KC_ACL1 ,KC_ACL0 ,_______ ,_______ ,
  _______ ,_______ ,_______ ,_______ ,         _______ ,_______ ,_______ ,_______ ,         _______ ,_______ ,_______ ,_______ 
  // @kbd-prettier:end
  )
//  [_MOUSE] = LAYOUT(
//     _______, _______,  _______, _______, _______, _______, _______,         _______,  _______, _______, _______, _______, _______, _______,
//     _______, _______,  _______, _______, _______, _______, _______,         _______,  _______, _______, _______, _______, _______, _______,
//     _______, _______,  _______, _______, _______, _______, _______,         _______,  _______, _______, _______, _______, _______, _______,
//     _______, _______, _______, _______,           _______, _______,         _______,  _______,          _______, _______, _______, _______
//  )
};
