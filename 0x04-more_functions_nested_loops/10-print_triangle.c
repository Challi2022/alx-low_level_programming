#include "main.h"
#include <stdio.h>
/**
*print_triangle - Prints the square # of a given number
*@size: is the number to be checked
*
**/

void print_triangle(int size)
{
	if (size > 0)
	{
		int rownum, space, symbol;

		for (rownum = 1; rownum <= size; rownum++)
		{
			for (space = size; space > rownum; space--)
			{
				_putchar(' ');
			}

			for (symbol = 1; symbol <= rownum; symbol++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}

	}

	else
		_putchar('\n');
}
