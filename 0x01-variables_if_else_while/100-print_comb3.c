#include <stdio.h>
/**
*main-program entry point.
*
*Return:0 success, non zero error.
**/
int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{

		for (j = 1; j > i; j++)
		{
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');

		}
	}
	return (0);
}
