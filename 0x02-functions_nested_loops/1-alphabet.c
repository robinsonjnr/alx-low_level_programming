#include "main.h"

/**
 * void print_alphabet-prints alphabets in lower case
 */

void print_alphabet(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
		_putchar(lc);
	
	_putchar('\n');
}
