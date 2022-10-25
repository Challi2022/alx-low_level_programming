#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_strcpy - copy the charactors from one string to another
*@dest: destination array
*@src: source array
*Return: charactor
**/
char *_strcpy(char *dest, char *src)
{
	char *start;

	start = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}

