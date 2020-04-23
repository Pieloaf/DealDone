/*
Title: Colours.h
Description: This is a header file which defines the ANSI colour codes into easy to understand macros
Date Made: 10/03/20
Last Updated: 10/03/20
*/

#ifndef COLOURS_H
#define COLOURS_H

/// Code Behaviour: The colour should be used in a standard cout. This colour will remain on the console until another colour is passed into a cout

#ifdef linux
/// Text Colour Codes
// Normal Colours
#define BLK "\x1B[30m" // black
#define RED "\x1B[31m" // red
#define GREN "\x1B[32m" // green
#define ORNG "\x1B[33m" // orange
#define BLUE "\x1B[34m" // blue
#define PURP "\x1B[35m" // purple
#define CYAN "\x1B[36m" // cyan
#define WITE "\x1B[37m" // white

//Bright Colours
#define LBLK "\x1B[90m" // light black
#define LRED "\x1B[91m" // light red
#define LGREN "\x1B[92m" // light green
#define LORNG "\x1B[93m" // light orange
#define LBLUE "\x1B[94m" // light blue
#define LPURP "\x1B[95m" // light purple
#define LCYAN "\x1B[96m" // light cyan
#define LGREY "\x1B[97m" // light grey
#define LWITE "\x1B[98m" // light white

// No Colour
#define NOCOL "\x1B[39m" // no colour


/// Background Colour Codes
// Normal Colours
#define B_BLK "\x1B[40m" // black background
#define B_RED "\x1B[41m" // red background
#define B_GREN "\x1B[42m" // green background
#define B_ORNG "\x1B[43m" // orange background
#define B_BLUE "\x1B[44m" // blue background
#define B_PURP "\x1B[45m" // purple background
#define B_CYAN "\x1B[46m" // cyan background
#define B_WITE "\x1B[47m" // white background

// Bright Colours
#define B_LBLK "\x1B[100m" // light black background
#define B_LRED "\x1B[101m" // light red background
#define B_LGREN "\x1B[102m" // light green background
#define B_LORNG "\x1B[103m" // light orange background
#define B_LBLUE "\x1B[104m" // light blue background
#define B_LPURP "\x1B[105m" // light purple background
#define B_LCYAN "\x1B[106m" // light cyan background
#define B_LWITE "\x1B[107m" // light white background

// No Colour
#define B_NOCOL "\x1B[49m" // removes colour

// Effects
#define BOLD "\x1B[1m" // bold text
#define SLO_BLINK "\x1B[5m" // slow blink
#define FST_BLINK "\x1B[6m" // fast blink
#define NO_BLINK "\x1B[25m" // no blink

// ***REMOVE ALL***
#define GO_AWAY "\x1B[0m" // removes all effects

#endif // linux

#ifdef WIN32
/// Blank Codes so there is no printout on windows
// Normal Colours
#define BLK ""
#define RED ""
#define GREN ""
#define ORNG ""
#define BLUE ""
#define PURP ""
#define CYAN ""
#define WITE ""

//Bright Colours
#define LBLK ""
#define LRED ""
#define LGREN ""
#define LORNG ""
#define LBLUE ""
#define LPURP ""
#define LCYAN ""
#define LGREY ""
#define LWITE ""

// No Colour
#define NOCOL ""


/// Background Colour Codes
// Normal Colours
#define B_BLK ""
#define B_RED ""
#define B_GREN ""
#define B_ORNG ""
#define B_BLUE ""
#define B_PURP ""
#define B_CYAN ""
#define B_WITE ""

// Bright Colours
#define B_LBLK ""
#define B_LRED ""
#define B_LGREN ""
#define B_LORNG ""
#define B_LBLUE ""
#define B_LPURP ""
#define B_LCYAN ""
#define B_LWITE ""

// No Colour
#define B_NOCOL ""

// Effects
#define BOLD ""
#define SLO_BLINK ""
#define FST_BLINK ""
#define NO_BLINK ""

// ***REMOVE ALL***
#define GO_AWAY ""

#endif // _Win32

#endif
