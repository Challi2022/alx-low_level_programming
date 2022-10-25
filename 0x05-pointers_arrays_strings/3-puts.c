#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*_puts - Prints a string
*@str: a string pointer
**/

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar('\n');

}
