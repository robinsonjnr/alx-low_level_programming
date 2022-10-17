#include <stdio.h>
/**
 * main - program entry point
 * Description: prints results of possible combination of two numbers
 * Return:0 if non error and non zeros if errors.
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
