#include <stdio.h>
/**
 * main - program entry point
 *
 * Return: 0 if non error and non zeros if errors
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
