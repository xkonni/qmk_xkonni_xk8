#include QMK_KEYBOARD_H
// clang-format off
enum layer_names {
  _HOME,
  _UPPER,
  _LOWER,
  _MISC
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_HOME] = LAYOUT(
    KC_A, KC_B, KC_C, KC_D,
    KC_E, KC_F, KC_G, TO(1)
),
[_UPPER] = LAYOUT(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
),
[_LOWER] = LAYOUT(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
),
[_MISC] = LAYOUT(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
)
};
// clang-format on

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_HOME]  = {{KC_VOLD, KC_VOLU}},
    [_UPPER] = {{KC_TRNS, KC_TRNS}},
    [_LOWER] = {{KC_TRNS, KC_TRNS}},
    [_MISC]  = {{KC_TRNS, KC_TRNS}},
};