#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: the first value to be swapped
 * @b: the second value to be swapped
 */

void swap_int(int *a, int *b)
{
	int swp = *a;
	*a = *b;
	*b = swp;

}
