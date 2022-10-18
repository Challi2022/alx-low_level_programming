#include <stdio.h>
void print_alphabet(void);
/**
 *main-program entry point.
 *
 *Return: On success 0.
 **/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
	ch++;
	}
	putchar('\n');
	return (0);
}
