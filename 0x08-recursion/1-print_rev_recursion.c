#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_print_rev_recursion- Prints a srting in areverse order
 *@s: String value passed
 **/
void _print_rev_recursion(char *s)
{
	int leng = strlen(s);
	int i;

	for (i = leng; i > 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
