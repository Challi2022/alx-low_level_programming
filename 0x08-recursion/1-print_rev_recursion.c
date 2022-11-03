#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_print_rev_recursion- Prints a srting in areverse order
 *@s: String value passed
 **/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
	_print_rev_recursion(s + 1);
	putchar(*s);
	}
}
