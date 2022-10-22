#include "main.h"
#include <stdio.h>
/**
*print_triangle - Prints the square # of a given number
*@size: is the number to be checked
*
**/

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = size; i > 0; i--)
		{
			for (j = size; j > 0; j--)
			{
				_putchar(' ');
			}
			_putchar('#');
			_putchar('\n');
		}

	}

	else
		_putchar('\n');
}
