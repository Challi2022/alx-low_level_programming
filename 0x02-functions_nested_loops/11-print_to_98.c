#include "main.h"
/**
 *print_to_98 - prints all natural numbers from n to 98
 *@n: the number to be passed to the function
 *Rerurn: 0
 **/

void print_to_98(int n)
{

	if (n < 0)
	{
		while  (n <= 98)
		{
			_putchar('-');
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}
	else if (n >= 0 && n < 98)
	{
		while  (n <= 98)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}

	else
	{
		while (n >= 98)
		{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
		}
	}
	n--;

	_putchar('\n');
}
