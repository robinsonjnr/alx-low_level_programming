#include "main.h"

/**
 * -islower.c-program detects small letter c
 *  Return 1 if c is lowercase and 0 if its false
 *  program written by robinsonjnr
 */

int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else (c !>= 'a' && c !<= 'z')
		return (0);
}
