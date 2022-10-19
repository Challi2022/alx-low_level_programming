#include "main.h"
/**
 *print_to_98 - prints all natural numbers from n to 98
 *@n: the number to be passed to the function
 *Rerurn: 0
 **/

void print_to_98(int n)
{

	for (n = 0; n <= 98; n++)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
	}


	while (n >= 98)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
	}
	n--;

	_putchar('\n');
	break;
}
