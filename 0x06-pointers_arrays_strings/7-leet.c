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
	char cmp[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char num[] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};

	i = 0;
	while (s[i] != '\0')
	{
		for (i = 0; i < 10; i++)
		{
			if (s[i] == cmp[i])
				*s = num[i];
		}
		i++;
	}
	return (s);
}
