#include <stdio.h>
/**
 * main-program entry point.
 *
 * Return zero if no error and non zero if error.
 */
int main(void)
{
	char ac;
	for (ac = 'a'; ac <= 'z'; ac++)
	{
	if (ac != 'e' && ac != 'q')
		putchar(ac);
	}
	putchar('\n');
	return (0);
}

