#include "main.h"

/**
 *print_last_digit- prints the last of a number
 *@n: the number to be checked
 *Return: the last digit of a number
 **/

int print_last_digit(int n)
{
	int ld = n % 10;

	_putchar(ld);
	return (ld);
}
