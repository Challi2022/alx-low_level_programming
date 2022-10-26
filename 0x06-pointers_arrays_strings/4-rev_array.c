#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*reverse_array - reverses the content of array
*@a: array content passes
*@n: The number of element in array
**/
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
