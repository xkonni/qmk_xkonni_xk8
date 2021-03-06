 /* Copyright 2020 Bratzworth 
  * 
  * This program is free software: you can redistribute it and/or modify 
  * it under the terms of the GNU General Public License as published by 
  * the Free Software Foundation, either version 2 of the License, or 
  * (at your option) any later version. 
  * 
  * This program is distributed in the hope that it will be useful, 
  * but WITHOUT ANY WARRANTY; without even the implied warranty of 
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
  * GNU General Public License for more details. 
  * 
  * You should have received a copy of the GNU General Public License 
  * along with this program.  If not, see <http://www.gnu.org/licenses/>. 
  */

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xBEEF
#define PRODUCT_ID      0x0008
#define DEVICE_VER      0x0001
#define MANUFACTURER    xkonni
#define PRODUCT         xk8

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 4

/* pin-out */
#define MATRIX_ROW_PINS { D4, C6 }
#define MATRIX_COL_PINS { D7, E6, B4, B5 }

#define ENCODERS_PAD_A { D0 }
#define ENCODERS_PAD_B { D1 }
#define ENCODER_RESOLUTION 4

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* VIAL */
#define VIAL_KEYBOARD_UID {0x61, 0x45, 0x29, 0x5C, 0xF3, 0x73, 0xF0, 0x1B}
#define VIAL_ENCODER_DEFAULT { KC_VOLD, KC_VOLU, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS }
#define VIAL_ENCODER_KEYCODE_DELAY 25
