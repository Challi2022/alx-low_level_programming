#include <stdio.h>

/**
*main-program entry point.
*
*Return:0-no error, non-zero value if error.
**/

int main(void)
{
	char al;

	for (al = 'z'; al >= 'a'; al--)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
