#include "../../config.h"

#ifndef CONFIG_BLAKEDIETZ_H
#define CONFIG_BLAKEDIETZ_H

// Define mousekey settings
#undef MOUSEKEY_DELAY
#undef MOUSEKEY_INTERVAL
#undef MOUSEKEY_MAX_SPEED
#undef MOUSEKEY_TIME_TO_MAX
#undef MOUSEKEY_WHEEL_DELAY

#define MOUSEKEY_DELAY          0
#define MOUSEKEY_INTERVAL       20
#define MOUSEKEY_MAX_SPEED      2
#define MOUSEKEY_TIME_TO_MAX    5
#define MOUSEKEY_WHEEL_DELAY    0

// This makes it possible to do rolling combos (zx) with keys that convert to other keys on hold (z becomes ctrl when
// you hold it, and when this option isn't enabled, z rapidly followed by x actually sends Ctrl-x. That's bad.)
#undef  IGNORE_MOD_TAP_INTERRUPT
#define IGNORE_MOD_TAP_INTERRUPT
#endif
