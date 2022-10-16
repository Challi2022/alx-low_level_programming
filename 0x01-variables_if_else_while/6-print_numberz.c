#include <stdio.h>
/**
*main-program entry point.
*
*Return:0-no error, non-zero value if error.
**/

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
