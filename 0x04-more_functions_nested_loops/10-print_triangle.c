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
		int rownum, space, subrow, symbol;

		subrow = size - rownum;

		for (rownum = 1; rownum <= size; rownum++)
		{
			for (space = 1; space <= subrow; space++)
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
