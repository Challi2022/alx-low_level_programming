#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*capital - Checks for letter passed
*@c: a character to be checked
**/
void capital(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
}
/**
*cap_string - A string to be capitalized
*@s: a string value passed
*Return: value
**/
char *cap_string(char *s)
{
	int i = 0;
	int l = strlen(s);

	for (i = 0; i < l; i++)
	{
		if (i == 0)
		{
			capital(&s[i]);
		}
		else if (s[i - 1] == ' ' || s[i - 1] == '\n' || s[i - 1] == ',')
		{
			capital(&s[i]);
		}
		else if (s[i - i] == '.' || s[i - 1] == '!' || s[i - 1] == '?')
		{
			capital(&s[i]);
		}
		else if (s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{')
		{
			capital(&s[i]);
		}
		else if (s[i - 1] == ';' || s[i - 1] == '"' || s[i - 1] == '}')
		{
			capital(&s[i]);
		}
		else if (s[i - 1] == '\t')
		{
			capital(&s[i]);
		}
	}
	return (s);
}

