#include <stdio.h>
/**
 * main- program entry point
 *
 * Retunr zero if no error and non zero if error.
 */
int main(void)
{
	int num;
	chat hexdec="0123456789abcdef";
	for (num='0';, num <16; num++)
	{
		putchar(hexdec[num]);
	}
	putchar("\n");
	return (0);
}
