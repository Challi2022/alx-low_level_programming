#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_strncpy - Copy the string from source to distinatio
*@dest: destination string
*@src: source string
*@n: intiger for index
*Return: result
**/
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr;

	ptr = strncpy(dest, src, n);

	return (ptr);
}
