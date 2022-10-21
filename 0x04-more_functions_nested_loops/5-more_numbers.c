#include "main.h"
#include "stdio.h"

/**
* more_numbers - check the code
*
* Return: Always 0.
*/
void more_numbers(void)
{
	int i;
	int j;
	char num[] = "01234567891011121314";

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j < 20; j++)
		{
			_putchar(num[j]);
		}

		_putchar('\n');
	}
}
