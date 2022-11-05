#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *main - Main program entry
 * *@argc: is value for argument count
 * *@argv: the array of a string argument
 * *Return: 0
 * **/
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 0)
	printf("0\n");
	else if (argc != 0)
	{
		for (i = 0; i < argc; i++)
		{
			if (*argv[i] >= '0' && *argv[i] >= '9')
			{
				sum += atoi(argv[i]);
				printf("%d\n", sum);
			}	
			else if (*argv[i] >= 'a' || *argv[i] <= 'z' || *argv[i] >= 'A' || *argv[i] <= 'Z')
				printf("Error\n");
		}
	}
/*	printf("%d\n", sum); */
	return (0);
}
