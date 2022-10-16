#include <stdio.h>
/**
*main-program entry point.
*
*Return:0-no error, non-zero value if error.
**/
int main(void)
{
	char lw;
	char up;

	for (lw = 'a'; lw <= 'z'; lw++)
		putchar(lw);
	for (up = 'A'; up <= 'Z'; up++)
		putchar(up);
	putchar('\n');
	return(0);

}
