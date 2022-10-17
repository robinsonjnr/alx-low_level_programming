#include <stdio.h>
/**main-proram entry point
 * Return:0 if sucessful and non zero if failure
 */
int main()
{
	int i, k ='0', j
	
	for (i = '0'; i <= '9'; i++)
	{
	for (j = k; j <= '9'; j++)
	{
	if (i != j)
	{
	continue;
	}
	if (i == '8' && j == '9')
	{
	break;
	}
	else
	{
	putchar(',');
	putchar(' ');
	}
	}
	k++;
	}
	putchar('\n');
	return (0);
}
