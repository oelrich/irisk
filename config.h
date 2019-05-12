#pragma once

#include "config_common.h"

/* Use I2C or Serial, not both */

#define USE_SERIAL
// #define USE_I2C

/* Select hand configuration */

// #define MASTER_LEFT
// #define MASTER_RIGHT
#define EE_HANDS
// #undef COMBO_COUNT
// #define COMBO_COUNT 52
// #define TAPPING_TERM 220
#define LEADER_PER_KEY_TIMING
#define LEADER_TIMEOUT 250
