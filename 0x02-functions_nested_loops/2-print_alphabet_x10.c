#include "main.h"

/**
 * print_alphabet_x10- prints an alphabet in 10 loops
 */

void print_alphabet_x10(void);
{
	int counter = 0;
	char lc;

	while (counter++ <= 9)
	{
		for (lc = 'a'; lc <= 'z'; lc++)
			putchar ("%c", lc);
		putchar ('\n');
	}
}
