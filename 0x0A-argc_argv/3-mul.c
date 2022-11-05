#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - Main program entry
 *@argc: is value for argument count
 *@argv: the array of a string argument
 *Return: 0
 **/
int main(int argc, char **argv)
{
	int mul = 1;

	if (argc - 1 == 2)
	{
		mul = atoi(*(argv + 1)) * atoi(*(argv + 2));
		printf("%d\n", mul);
		return (0);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
}
