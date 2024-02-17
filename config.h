#pragma once
// Double tap reset to enter bootloader
// Activates the double-ap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
// Timeout window in ms in which the double tap can occur
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U
// Specify an optional status LED by GPIO number which blinks when entering the bootloader
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED D5

// Pick good defaults for enabling homerow modifiers
#define TAPPING_TERM 200
#define PERMISSIVE_HOLD
#define QUICK_TAP_TERM 0
