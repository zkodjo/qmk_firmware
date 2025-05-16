# MCU name
MCU = atmega32u4
BOOTLOADER = atmel-dfu
F_CPU = 16000000
ARCH = AVR8
F_USB = $(F_CPU)

# Build Options
#   comment out to disable the options.
#
# BOOTMAGIC_ENABLE = yes	# Virtual DIP switch configuration(+1000)
MOUSEKEY_ENABLE = no	# Mouse keys(+4700)
CONSOLE_ENABLE = no	# Console for debug(+400)
COMMAND_ENABLE = no    # Commands for debug and configuration
OLED_ENABLE = yes    # Enable Support for SSD1306 or SH1106 OLED Displays; Communicating over I2C
OLED_DRIVER = ssd1306
RGBLIGHT_ENABLE = no
#RGBLIGHT_DRIVER = WS2812
RGB_MATRIX_ENABLE = yes
RGB_MATRIX_DRIVER = ws2812
DEBOUNCE_TYPE = sym_eager_pk
AVR_USE_MINIMAL_PRINTF = yes
AUDIO_ENABLE = no
MUSIC_ENABLE = no
# Add this - crucial for memory optimization
EXTRAFLAGS += -flto
SPLIT_KEYBOARD = yes
CAPS_WORD_ENABLE = yes
SPACE_CADET_ENABLE = no
GRAVE_ESC_ENABLE = no
