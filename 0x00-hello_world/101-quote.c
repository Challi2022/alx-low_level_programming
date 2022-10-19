#include <stdio.h>
#include <string.h>
/**
 *main-progrtam entry point
 *
 *Return:0 success, non zero fail
 **/

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i;

	for (i = 0; i <= strlen(str); i++)
	{
		putchar(str[i]);
	}
	return (1);
}
