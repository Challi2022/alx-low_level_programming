#include "main.h"
#include <stdio.h>
/**
*print_array - prints elements of an array
*@a: a passed value of an array
*@n: a passed value of an array
**/
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i < n - 1)
		{
			printf("%d", a[i]);
			printf(", ");
		}
		else
			printf("%d", a[i]);
		i++;
	}

	printf("\n");
}
