# xk8

idea from https://www.partsnotincluded.com/diy-stream-deck-mini-macro-keyboard/

qmk config loosely based on `handwired/6key` and several other keyboards

## features

- 7 keys
- 1 rotary encoder
- VIA support

## installation

- clone to qmk/keyboards/xkonni/xk8
- build with `make xkonni:xk8:default`
- flash with `make xkonni:xk8:default:flash`

- customize with VIA
  - load keymaps/default/via.json

- rotary encoder can not (yet?) be programmed in VIA, change in keymap and flash


## components

- Arduino Pro Micro
- 7 switches
- 1 EC11 rotary encoder
- Case
  - Stream Cheap Deck
  - https://www.thingiverse.com/thing:2822140
- Faceplate (for rotary encoder)
  - https://www.thingiverse.com/thing:4303318

## Pin Out

### Arduino Pro Micro

```
PD3 TXD |---------| RAW RAW
PD2 RXI |         | GND GND
GND GND |         | RST RST
GND GND |         | VCC VCC
PD1   2 | Arduino | A3  PF4
PD0   3 |   Pro   | A2  PF5
PD4   4 |  Micro  | A1  PF6
PC6   5 |         | A0  PF7
PD7   6 |         | 15  PB1
PE6   7 |         | 14  PB3
PB4   8 |         | 16  PB2
PB5   9 |---------| 10  PB6
```


### EC11 Rotary Encoder

- rotary encoder
  - `PAD_A PD1`
  - `GND   GND`
  - `PAD_B PD0`


### MATRIX

If you wire the components differently, change these values in `config.h`

- ROWS
  - `ROW1 PD4`
  - `ROW2 PC6`

- COLS
  - `COL1 PD7`
  - `COL2 PE6`
  - `COL3 PB4`
  - `COL4 PB5`
