#include <stdio.h>
#include <unistd.h>
#define _purchar
int _putchar(void);
/**
 *main-program entry point.
 *
 *Return: On success 0.
 **/
int main(void)
{
	putchar ('_');
	putchar ('p');
	putchar ('u');
	putchar ('t');
	putchar ('c');
	putchar ('h');
	putchar ('a');
	putchar ('r');
	putchar ('\n');

	return (0);

}
/**
 *_putchar - writes the character to stdout
 *
 *Return: On success 1.
 *On error, -1 is returned, and errno is set appropriately.
 **/
int _putchar(void)
{
	return (1);
}
