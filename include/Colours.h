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
#define BLK "\x1B[30m"
#define RED "\x1B[31m"
#define GREN "\x1B[32m"
#define ORNG "\x1B[33m"
#define BLUE "\x1B[34m"
#define PURP "\x1B[35m"
#define CYAN "\x1B[36m"
#define WITE "\x1B[37m"

//Bright Colours
#define LBLK "\x1B[90m"
#define LRED "\x1B[91m"
#define LGREN "\x1B[92m"
#define LORNG "\x1B[93m"
#define LBLUE "\x1B[94m"
#define LPURP "\x1B[95m"
#define LCYAN "\x1B[96m"
#define LGREY "\x1B[97m"
#define LWITE "\x1B[98m"

// No Colour
#define NOCOL "\x1B[39m"


/// Background Colour Codes
// Normal Colours
#define B_BLK "\x1B[40m"
#define B_RED "\x1B[41m"
#define B_GREN "\x1B[42m"
#define B_ORNG "\x1B[43m"
#define B_BLUE "\x1B[44m"
#define B_PURP "\x1B[45m"
#define B_CYAN "\x1B[46m"
#define B_WITE "\x1B[47m"

// Bright Colours
#define B_LBLK "\x1B[100m"
#define B_LRED "\x1B[101m"
#define B_LGREN "\x1B[102m"
#define B_LORNG "\x1B[103m"
#define B_LBLUE "\x1B[104m"
#define B_LPURP "\x1B[105m"
#define B_LCYAN "\x1B[106m"
#define B_LWITE "\x1B[107m"

// No Colour
#define B_NOCOL "\x1B[49m"

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

#endif // _Win32

#endif
