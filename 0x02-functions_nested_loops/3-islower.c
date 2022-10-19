#include <stdio.h>
/**
 *_islower - check the lowercase charactor.
 *@c: is the charachtor to be checked
 *Return: 1 if lowercase, otehrwise 0.
 **/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
