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
	char *begin, *end;

	length = strlen(s);
	end = s + length - 1;

	for (count = 0; count < length / 2; count++)
	{
		begin = *s;
		*s = *end;
		*end = begin;
		s++
		end--;
	}
	putchar(s);
	putchar('\n');
}
