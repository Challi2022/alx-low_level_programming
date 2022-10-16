#include <stdio.h>
/**
*main-program entry point.
*
*Return:0-no error, non-zero value if error.
**/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
