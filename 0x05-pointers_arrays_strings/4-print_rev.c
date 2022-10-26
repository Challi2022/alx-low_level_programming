#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *print_rev - Prints reverse of a  string
 *@s: a string pointer
 **/
void print_rev(char *s)
{
	int length, count;
/*	char *begin, *end; */

	length = strlen(s);
/*	end = s + length - 1; */

	for (count = length - 1; count >= 0; count--)
	{
		putchar(s[count]);
	}
	putchar('\n');
}
