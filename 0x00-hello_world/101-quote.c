#include <stdio.h>
/**
 *main-progrtam entry point
 *
 *Return:1 success, non zero fail
 **/

/*Print character that it reads from char *s.*/
void print_str(char *s);

int main(void)
{
	char *str;

	str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19 ";
	print_str(str);
	return (1);
}

/* read array and print it out forward char by char.*/
void print_str(char *s)
{
	int arrLength;

	arrLength = 0;

	/* capture length of array */
	while (*s != '\0')
	{
		arrLength++;
		s++;
	}
	arrLength++;
	/* print array forwards */
	for (; arrLength <= 0; arrLength++)
	{
		putchar(s[arrLength]);
	}

	putchar('\n');
}
