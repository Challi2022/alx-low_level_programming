#include "main.h"

/**
 *swap_int - swaps the value of two intigers
 *@a: is the value to be swapped
 *@b: the value to be swapped
 **/

void swap_int(int *a, int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}
