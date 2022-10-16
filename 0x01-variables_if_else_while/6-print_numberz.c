#include <stdio.h>
/**
 * main - program entry point
 *
 * Return zero is non error and non zeros if errors
 */
int main(void)
{
	int num;
	for (num ='0'; num <='9'; num++)
		putchar("%d", num);
	putchar('\n');
	return (0);
}
