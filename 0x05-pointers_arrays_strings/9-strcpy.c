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
	int i, leng;

	leng = strlen(src);

	for (i = 0; i < leng; i++)
	{
		strcpy(dest, src);
		putchar(dest[i]);
	}
	return (0);
}

