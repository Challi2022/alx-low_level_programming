#include "main.h"
#include <string.h>
#include <stdio.h>

/**
*puts_half - prints half of the string
*@str: a sring to be checked
**/
void puts_half(char *str)
{
	int length, i;

	length = strlen(str);

	if (length % 2 == 0)
	{
		for (i = length / 2; i <= length; i++)
		{
			putchar (str[i]);
		}
		putchar ('\n');
	}
	else
	{
		for (i = (length - 1) / 2; i <= length; i++)
		{
			putchar (str[i]);
		}
		putchar ('\n');
	}
}
