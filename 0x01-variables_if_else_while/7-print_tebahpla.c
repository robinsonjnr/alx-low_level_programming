#include <stdio.h>
/**
 * main - point of program entry.
 *
 * Return zero if non error and zeros if errors
 */
int main(void)
{
	char a;
	for (a ='z'; a >='a';,a++)
		putchar(a);
	putchar('\n');
	return (0);
}
