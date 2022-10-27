#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*leet - encodes a string into 1337
*@s: String value passed
*Return: value
**/
char *leet(char *s)
{
	int i;
	char *cmp = "aAeEoOtTlL";
	char *num = "4433007711";

	i = 0;
	while (*s)
	{
		for (i = 0; i < 10; i++)
		{
			if (*s == cmp[i])
				*s = num[i];
		}
		s++;
	}
	return (s);
}
