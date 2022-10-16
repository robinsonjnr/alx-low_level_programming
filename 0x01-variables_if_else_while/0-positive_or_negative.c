#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-program entry point.
 * Return:0 if no error and non zero value if error
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() -RAND_MAX /2;

	if (n > 0)
		printf("%d is postive\n",n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n",n);

	return (0);
}
