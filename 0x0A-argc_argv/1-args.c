#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - Main program entry
 *@argc: is value for argument count
 *@argv: the array of a string argument
 *Return: 0
 **/
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc > 1)
	{
	for (i = 0; i < argc; i++)
	{
		sum +=  atoi(argv[i]);

	}
	printf("%d\n", i - 1);
	}
	else
		printf("%d\n", argc - 1);
	return (0);
}
