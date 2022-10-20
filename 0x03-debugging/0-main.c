#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: return 0: no error, non zero alue for error
 **/
int main(void)
{
	int n;

	positive_or_negative(int i);
	i = rand() - RAND_MAX / 2;
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
		printf("%d is zero\n", i);

	return (0);
}
