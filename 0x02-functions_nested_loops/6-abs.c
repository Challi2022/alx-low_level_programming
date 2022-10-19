#include "main.h"
/**
 *_abs - computes the absolute value of an intiger.
 *@num: an intiger to be checked.
 *Return: Always 0
 **/
int _abs(int num)
{
	int num;

	if (num > 0)
	{
		_putchar('%d');
		_putchar('\n');
		_putchar(num);
		return (0);
	}

	else if (num == 0)
	{
		_putchar('%d');
		_putchar('\n');
		_putchar('num');
		return (0);
	}
	else
	{
		_putchar('%d');
		_putchar('\n');
		_putchar('num');
		return (0);
	}
}
