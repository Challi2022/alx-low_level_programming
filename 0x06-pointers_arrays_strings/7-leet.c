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
	int i, j;
	char *cmp = "aAeEoOtTlL";
	char *num = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == cmp[j])
				s[i] = num[j];
		}
	}
	return (s);
}
