#include "main.h"
#include <stdio.h>
#include <string.h>
int string_length(char *pointer);
/**
 *print_rev - Prints reverse of a  string
 *@s: a string pointer
 **/
void print_rev(char *s)
{
	int length, count;
	char *begin, *end, temp;

	length = string_length(s);
	begin = s;
	end = s;

	for (count = 0; count < length - 1; count++)
		end++;

	for (count = 0; count < length / 2; count++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	}
	putchar(s);
	putchar('\n');
}

/**
 *string_length - Counts the length of the string
 *@pointer: the value to be checked
 *Return: 0
 */
int string_length(char *pointer)
{
	int c = 0;

	while (*(pointer + c) != '\0')
		c++;

	return (c);
}
