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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
