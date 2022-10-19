#include <stdio.h>
/**
 *_isalpha -check the lowercase charactor.
 *@c: is the letter to be checked
 *Return:1 if lowercase, otehrwise 0.
 **/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
