#include "main.h"
#include <stdio.h>
/**
* print_line - prints line.
*
*@n: number to be checked.
*/

void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');

			n--;
		}
	else
		_putchar('\n');
	}
}
