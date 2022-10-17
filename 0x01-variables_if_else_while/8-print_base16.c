#include <stdio.h>
/**
 * main- program entry point
 *
 * Return:0 if no error and non zero if error.
 */
int main(void)
{
	int num;
	char hexdeci ="0123456789abcdef"

	for (num = 0;, num < 16; num++)
	{
		putchar(hexdeci[num]);
	}	
	putchar('\n');
	return (0);
}
