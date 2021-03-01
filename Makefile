BOARD_TAG         = promicro
BOARD_SUB         = 16MHzatmega32U4
ALTERNATE_CORE    = SparkFun
ARDUINO_VAR_PATH  = $(PWD)/Arduino_Boards/sparkfun/avr/variants
VARIANT           = promicro
BOARDS_TXT        = $(PWD)/Arduino_Boards/sparkfun/avr/boards.txt
BOOTLOADER_PARENT = $(PWD)/Arduino_Boards/sparkfun/avr/bootloaders
ISP_PROG          = usbasp
AVRDUDE_OPTS      = -v
USB_VID           = 0x1b4f
USB_PID           = 0x9206
include /usr/share/arduino/Arduino.mk