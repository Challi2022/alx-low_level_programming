#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_strcat - Concatinates two strings
*@dest: the destination array of string
*@src: the source array of string
*Return: 0
**/

char *_strcat(char *dest, char *src)
{
	char *res;

	res = strcat(dest, src);

	return (res);
}
