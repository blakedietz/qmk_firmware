#ifndef CONFIG_USER_H
#define CONFIG_USER_H

    #include "config_common.h"

    /*
     * Based off of this section:
     * https://github.com/qmk/qmk_firmware/blob/master/doc/BUILD_GUIDE.md#the-configh-file
     */
    #ifndef CONFIG_BLAKEDIETZ_H
       // Features that can be disabled

       // disable debugging
       // #define NO_DEBUG
       // disable printing/debugging using hid_listen
       // #define NO_PRINT
       // disable layers
       // #define NO_ACTION_LAYER
       // disable tap dance and other tapping features
       // #define NO_ACTION_TAPPING
       // disable one-shot modifiers
       // #define NO_ACTION_ONESHOT
       // disable all macro handling
       // #define NO_ACTION_MACRO
       // disable the action function (deprecated)
       // #define NO_ACTION_FUNCTION

       // Features that can be enabled

       // NKRO by default requires to be turned on, this forces it on during keyboard startup regardless of EEPROM setting. NKRO can still be turned off but will be turned on again if the keyboard reboots.
       // #define FORCE_NKRO
       // when switching layers, this will release all mods
       // #define PREVENT_STUCK_MODIFIERS


        // Behaviors can be configured
        // #define TAPPING_TERM 200
        // how long before a tap becomes a hold
        // #define RETRO_TAPPING
        // tap anyway, even after TAPPING_TERM, if there was no other key interruption between press and release
        // #define TAPPING_TOGGLE 2
        // how many taps before triggering the toggle
        // #define PERMISSIVE_HOLD
        // makes tap and hold keys work better for fast typers who don't want tapping term set above 500
        // #define LEADER_TIMEOUT 300
        // how long before the leader key times out
        // #define ONESHOT_TIMEOUT 300
        // how long before oneshot times out
        // #define ONESHOT_TAP_TOGGLE 2
        // how many taps before oneshot toggle is triggered
        // #define IGNORE_MOD_TAP_INTERRUPT
        // makes it possible to do rolling combos (zx) with keys that convert to other keys on hold
        // #define QMK_KEYS_PER_SCAN 4
        // Allows sending more than one key per scan. By default, only one key event gets sent via process_record() per scan. This has little impact on most typing, but if you're doing a lot of chords, or your scan rate is slow to begin with, you can have some delay in processing key events. Each press and release is a separate event. For a keyboard with 1ms or so scan times, even a very fast typist isn't going to produce the 500 keystrokes a second needed to actually get more than a few ms of delay from this. But if you're doing chording on something with 3-4ms scan times? You probably want this.

        // Set 0 if debouncing isn't needed
        #define DEBOUNCING_DELAY 5
        // Define mousekey settings
        #define MOUSEKEY_DELAY          0
        #define MOUSEKEY_INTERVAL       20
        #define MOUSEKEY_MAX_SPEED      7
        #define MOUSEKEY_TIME_TO_MAX    5
        #define MOUSEKEY_WHEEL_DELAY    0

        /*
         * This makes it possible to do rolling combos (zx) with keys that convert to other keys on hold (z becomes ctrl when
         * you hold it, and when this option isn't enabled, z rapidly followed by x actually sends Ctrl-x. That's bad.)
         */
        #define IGNORE_MOD_TAP_INTERRUPT

    #define CONFIG_BLAKEDIETZ_H
    #endif

#endif
