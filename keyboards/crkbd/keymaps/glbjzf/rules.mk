#### Build Options
####   change yes to no to disable
####
###BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
###MOUSEKEY_ENABLE = yes       # Mouse keys
###EXTRAKEY_ENABLE = yes       # Audio control and System control
####CONSOLE_ENABLE = no         # Console for debug
####COMMAND_ENABLE = no         # Commands for debug and configuration
###NKRO_ENABLE = yes           # Enable N-Key Rollover
###BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
###RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
###AUDIO_ENABLE = no           # Audio output
###RGB_MATRIX_ENABLE = no
###RGB_MATRIX_DRIVER = WS2812
###LTO_ENABLE = yes
###
#### if firmware size over limit, try this option
#### LTO_ENABLE = yes
###
###DEFAULT_FOLDER = crkbd/rev1
###
###RGBLIGHT_SUPPORTED = yes
###RGB_MATRIX_SUPPORTED = yes
###
###CONVERT_TO=promicro_rp2040
###
####SPLIT_KEYBOARD = yes




# https://docs.qmk.fm/#/config_options
MOUSEKEY_ENABLE = yes    # Mouse keys
RGBLIGHT_ENABLE = no   # Enable WS2812 RGB underlight.
OLED_ENABLE     = no
OLED_DRIVER     = SSD1306
LTO_ENABLE      = yes

CONSOLE_ENABLE = yes

# Easy definition of combos
VPATH +=  keyboards/gboards/

COMBO_ENABLE = yes

SRC += layermodes.c

#AUTO_SHIFT_ENABLE = yes



## ORIGINAL FILE
##
##
### https://docs.qmk.fm/#/config_options
##MOUSEKEY_ENABLE = yes    # Mouse keys
##RGBLIGHT_ENABLE = no   # Enable WS2812 RGB underlight.
##OLED_ENABLE     = no
##OLED_DRIVER     = SSD1306
##LTO_ENABLE      = yes
##
##CONSOLE_ENABLE = yes
##
### Easy definition of combos
##VPATH +=  keyboards/gboards/
##
##COMBO_ENABLE = yes
##
##SRC += layermodes.c
##
###AUTO_SHIFT_ENABLE = yes
##
##
##
##
