#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-program entry point.
 * Return:0 if no erro and non zero zero if error.
 */
int main(void)
{
	int n;
	int ldigit;

	srand(time(0)0;
	n-rand() - RANDMAX/2;
	ldigt= n%10;
	if (ldigit>5)
	{
	printf("last digit of %d is %d and is greater than 5\n", n,ldigit);
	}
	else if(ldigit==0)
	{
	printf("last digit of %d is %d and is 0\n",n,ldigit);
	}
	else if (ldigit<6 && ldigit !-0)
	{
	printf("last digit of %d is %d and is less than 6 and not 0\n",n,ldigit);
	}
	Return  (0);
}

