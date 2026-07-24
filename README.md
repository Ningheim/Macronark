# BlackVoiceMacropad
A macropad inspired by "Black Voice" an ability in a popular manga called Hunter X Hunter by Yoshihiro Togashi

The "Black Voice" is a 12 key macropad with RGB backlit keys. It uses QMK firmware and is upgradable with a 6-pin JST port on the PCB.

## Features:
- Full PLA Black Voice inspired case
- 12 blank DSA keys
- 12 SK6812 MINI-E LEDs for backlighting

## CAD Model:
Everything is fitted together with 6 M3 bolts and heatset inserts. The PCB sits in flush with the case but there is 1 M3 screw hole if you'd like to secure it to your own case.

It's in 2 parts, 1 part for the body and another for the cover.
<img width="764" height="750" alt="CAD" src="https://github.com/user-attachments/assets/b112f134-065e-48bf-84a5-8e6dcc7d27d9" />
Made in Onshape
At a later time a seperate PCB will be used to fill the top portion of the case. More RGB LEDs will be used to light up the eye cutouts and a OLED screen will go inside the mouth just as the series depicts it.

## PCB:
The PCB was made in KiCAD, The silkscreen was imported from a Figma image.
#### Schematic
<img width="1297" height="676" alt="SCH" src="https://github.com/user-attachments/assets/9999560a-d06f-4f94-8e77-cc5c69798cbe" />
#### PCB
<img width="552" height="737" alt="PCB" src="https://github.com/user-attachments/assets/b38f5817-ea63-4868-a789-e6f2f8483524" />
<img width="545" height="747" alt="3DPCB" src="https://github.com/user-attachments/assets/8d5f335b-e025-42be-a357-9c565dec8f0f" />

## Firmware Overview:
This hackpad uses [QMK](https://qmk.fm/) firmware.
- To turn on/off the RGB backlighting, press and hold the top-left key and the bottom-right key together
- All keys act as macros to be assigned to whatever you'd like.

## BOM:
Here's everything you need to make this hackpad
```
-1x Seeed XIAO RP2040
-12x through-hole 1N4148 Diodes
-12x Cherry MX Switches
-12x white blank DSA keycaps
-12x SK6812 MINI-E LEDs
-6x M3x16mm screws
-6x M3x5mx4mm heatset inserts
-1x Case, All 3D Printed
```
