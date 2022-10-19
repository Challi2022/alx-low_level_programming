#include <stdio.h>
<<<<<<< HEAD
/**
 *print_alphabet-program entry point.
 *
 *Reurun: On success 0.
 **/
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar('c');
		c++;
	}
	putchar('\n');
	return;
=======
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
>>>>>>> 0f370660b9002c77f5f01e2bde6ed62b81c9dd79
}
