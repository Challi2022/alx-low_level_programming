#include "main.h"
#include <stdio.h>
/**
*print_array - prints elements of an array
*@a: a passed value of an array
*@n: a passed value of an array
**/
void print_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n - 1; i++)
		printf("%d, ", a[i]);

	for (j = n - 1; j < n; j++)
		printf("%d ", a[i]);

	printf("\n");
}
