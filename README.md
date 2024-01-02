## Versions
- SquareLine Studio 1.3.4 / LVGL
- Arduino IDE 2.2.1 

## Branches
- branch `default` is default project created with SquareLine Studio. Not working with Waveshare RP2040 touch lcd 1.28
- branch `master` is project created with SquareLine Studio updated to work with Waveshare RP2040 touch lcd 1.28 -> NEED REFINEMENT
  - screen is working
  - touch is working
  - gesture : not tested (cannot work at this state)

Compare `default` and `master` branches to see differences.

## Based on
- https://www.waveshare.com/wiki/RP2040-Touch-LCD-1.28
- https://github.com/waveshareteam/RP2040-Touch-LCD-1.28/tree/main/arduino/RP2040-Touch-LCD-1.28
- https://forum.lvgl.io/t/how-to-use-cst816s-with-lvgl-for-gestures/11528

After compiled and uploaded code you will see a blue button with label `Click` on a white background.