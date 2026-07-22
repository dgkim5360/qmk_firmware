#pragma once

// BASE, NAV, NUM, SYM, FUN — VIA defaults to 4 and refuses to build past it.
#define DYNAMIC_KEYMAP_LAYER_COUNT 5

// Audio is on only for the two sounds that report state: the startup chime and
// the one on the way into the bootloader. Everything else stays quiet — the
// layer-change songs need DEFAULT_LAYER_SONGS, which is deliberately unset, and
// music mode is compiled out.
#define NO_MUSIC_MODE
