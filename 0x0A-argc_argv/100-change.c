#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: the amount of argument in the program
 * @argv: array that points to the arguments
 * Return: 1 if arguemts is not exactly one
 * and 0 if otherwise
 */
int main(int argc, char *argv[])
{
	int position, total, change, aux;
	int coins[] = {25, 10, 5, 2, 1};

	position = total = change = aux = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = atoi(argv[1]);

	if (total <= 0)
	{
		printf("0\n");
		return (0);
	}

	while (coins[position] != '\0')
	{

		if (total >= coins[position])
		{
			aux = (total / coins[position]);
			change += aux;
			total -= coins[position] * aux;
		}

		position++;
	}

	printf("%d\n", change);
	return (0);
}
