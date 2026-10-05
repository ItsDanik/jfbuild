// SDL interface layer
// for the Build Engine
// by Jonathon Fowler (jf@jonof.id.au)

#ifndef __build_interface_layer__
#define __build_interface_layer__ SDL

#include "baselayer.h"

#ifdef MISTER_HYBRID
// MiSTer hybrid core. joyb has the joystick of the core in the places of the
// game controller buttons the games know (joybutton_* of jfmact): A and B,
// which confirm and go back in menus, are Menu OK and Menu Back of the OSD,
// the d-pad is the d-pad, and the eight buttons of the core's "J1," list
// follow B in their order.
enum {
	MISTERJOY_MENUOK = 0,
	MISTERJOY_MENUBACK = 1,
	MISTERJOY_ACTION1 = 2,
	MISTERJOY_NUMACTIONS = 8,
	MISTERJOY_DPADUP = 11,
	MISTERJOY_DPADDOWN,
	MISTERJOY_DPADLEFT,
	MISTERJOY_DPADRIGHT,
	MISTERJOY_NUMBUTTONS
};

// The part of a tick (of 65536) that had passed at the last sampletimer():
// the clock is the core's field counter, and a field is not a whole number
// of ticks.
int gettimerfraction(void);
#endif

#else
#if (__build_interface_layer__ != SDL)
#error "Already using the " __build_interface_layer__ ". Can't now use SDL."
#endif
#endif // __build_interface_layer__

