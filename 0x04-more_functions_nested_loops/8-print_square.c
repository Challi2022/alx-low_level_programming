#include "main.h"
#include <stdio.h>
/**
  *print_square - Prints the square # of a given number
  *@size: is the number to be checked
  *
  **/

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}

	}

	else
		_putchar('\n');
}
