#include <stdio.h>

/**
*main-program entry point.
*
* Return:0-no error, non-zero value if error.
**/

int main(void)
{
	int hex;
	char hexValues[] = "0123456789abcdef";

	for (hex = 0; hex <= 15; hex++)
	{
		putchar(hexValues[hex]);
	}
	putchar('\n');
	return (0);
}

