#include <stdio.h>
/**
 * main- program entry point
 *
 * Retunr zero if no error and non zero if error.
 */
int main(void)
{
	int num;
	char letter;
	for (num = 0;, num < 10; num++)
		putchar((num % 10) + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	
	putchar('\n');
	return (0);
}
