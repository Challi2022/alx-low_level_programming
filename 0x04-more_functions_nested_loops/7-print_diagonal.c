#include "main.h"
#include <stdio.h>

/**
*print_diagonal - prints diagonal of a given number
*@n: number to be chedked
**/

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, j;
		int count = 0;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j < count; j++)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
			count++;
		}
	}
	else
		_putchar('\n');

}
