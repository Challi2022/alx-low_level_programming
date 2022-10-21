#include "main.h"
/**
*_isupper - check the lowercase charactor.
*@c: is the charachtor to be checked
*Return: 1 if uppercase, otehrwise 0.
**/
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
