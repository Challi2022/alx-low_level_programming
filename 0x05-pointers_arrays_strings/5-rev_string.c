#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *rev_string - prints the reversed string
 *@s: the string value
**/

void rev_string(char *s)
{
	int leng, count;
	char *end, start;

	leng = strlen(s);
	end = s + leng - 1;
	for (count = 0; count < leng / 2; count++)
	{
		start = *s;
		*s = *end;
		*end = start;
		s++;
		end--;
	}
}
