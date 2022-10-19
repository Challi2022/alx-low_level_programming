#include "main.h"

/**
 *print_sign - prints the sign of a number.
 *@n: is the letter to be checked
 *Return:1 if positive,-1 if negative, otehrwise 0.
 **/
int print_sign(int n)
{
	if (n > 0)
	{
		_purchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
