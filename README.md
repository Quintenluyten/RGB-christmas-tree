# RGB-christmas-tree
## Overview
![Assembled example](/images/Christmas_tree_1.jpeg?raw=true "Assembled example")

A PCB Christmas tree. An Attiny402 microcontroller controls the LEDs through 3 pins. The LEDs are attached in random order to the 3 control pins, creating a colorful light pattern. This project was designed using easyeda. Visit https://oshwlab.com/quintenluyten/magnetotronics for more information on the hardware design

## Notes when ordering / making these PCBs
- I have ordered using JLCPCB, if you select the option "Remove order number -> specify a location", the order number will be hidden close to the center of the tree.
- You should indicate when ordering that there are three different designs on the PCB panel
- The ATtiny402 can be replaced with pin compatible microcontrollers such as the ATtiny202
- The 0606 (1616 Metric) RGB LEDs can be quite challenging to solder by hand. Either pay for assembly with your PCB order, or use a hot plate. When performing manual assembly, I found it works best to add no-clean flux with a brush, hold the RGB Led in position using tweezers, and tap the pads with a soldering iron to make the connection, without adding any solder beforehand.
- Using an Arduino as a JTAG2UPDI adapter, the ATtiny can be programmed using the Arduino IDE and the megaTinyCore library. For more information, see https://github.com/SpenceKonde/megaTinyCore. The Arduino library necessary for installation requires the following json file to be added to the "Additional board manager URLs": http://drazzy.com/package_drazzy.com_index.json
- The programming header near the ATtiny does not need to be soldered. You can make your own programmer with a 3-pin male header. The pinout of the programming port is: GND (square pad) - UPDI - VDD. VDD can be anywhere between 1.8V - 5.5V for programming
- For succesful illumination of the LEDs, VDD should be 3V-5.5V

## License
This project uses the GNU GPL 3.0 license. You can copy, clone, and modify however you want, but if you intend to resell this product, you should make your product open source.
