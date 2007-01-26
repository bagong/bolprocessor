/*	PrefixCarbonTextEdit.h

	BP2 Mac Carbon Prefix Header 
	Using TextEdit
 */

#include <MacHeadersCarbon.h>

// 1 for debugging memory, 0 otherwise
#define BIGTEST 1

// 1 to execute Beta tests for data validity, 0 otherwise
#define COMPILING_BETA 1

// 1 to use WASTE for text editing, 0 to use TextEdit instead
#define WASTE 0

// disable built-in MIDI driver and OMS Midi driver
#define USE_BUILT_IN_MIDI_DRIVER 0
#define USE_OMS 0

// enable null MIDI driver
#define WITH_REAL_TIME_MIDI 1
