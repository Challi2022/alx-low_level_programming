#include "main.h"
/**
*print_most_numbers  - prints numbers from 0 to 9.
*@i: is the number to be checked
**/

void print_most_numbers(void)
{
	for (int i = 0; i <= 9; i++)
	{
		if (i == 2 && i == 4)
			continue;
		else
			_putchar('i');
	}

	_putchar('\n');
}
