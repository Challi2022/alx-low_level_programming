#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*This progrma will check numbers 0: >5 and <6 for given variable
*
*Return:0 if no error, Nonzero value if error
*/
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printf("%d and is greater than 5\n", n, lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("%d and is Zero\n", n, lastDigit);
	}
	else if (lastDigit < 6 && lastDigit != 0)
	{
		printf("%d and is less than 6 and not 0\n", n, lastDigit);
	}


	return (0);
}
