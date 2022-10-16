#include <stdio.h>
/**
*main-program entry point.
*
*Return:0-no error, non-zero value if error.
**/
int main(void)
{
	char ch;

	for (ch = 'a'; ch != 'q' && 'e'; ch++)
	{
		putchar(ch);
		putchar('\n');
	}

	return (0);

}
