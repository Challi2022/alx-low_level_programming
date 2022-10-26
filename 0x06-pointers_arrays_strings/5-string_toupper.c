#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *string_toupper - changes the string to uppercase
 *@s: the value of string to be checked.
 *Return: value
 **/

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a'  && s[i] <= 'z')
		{
			s[i] = s[i] - 'a' + 'A';
		}
		i++;
	}
	return (s);
}
