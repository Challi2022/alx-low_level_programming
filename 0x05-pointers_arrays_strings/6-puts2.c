#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*puts2 - print every other charachter
*@str: A srting to be checked
**/

void puts2(char *str)
{
	int i, leng;

	leng = strlen(str);

	for (i = 0; i < leng; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
