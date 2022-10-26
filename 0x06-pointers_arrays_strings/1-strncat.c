#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strncat - Concatinates two strings.
 *@dest: Destination string array
 *@src: source string array
 *@n: index of a destination
 *Return: 0
 **/

char *_strncat(char *dest, char *src, int n)
{
	char *ptr;

	ptr = strncat(dest, src, n);

	return (ptr);
}
