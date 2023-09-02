#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - entry point
  *
  * Description: program that adds positive numbers
  *
  * @argc: arument count
  * @argv: argument array
  *
  * Return: Always 0 - success
  */
int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;
	int sum = 0;

	/* Print 0 if no number is passed */
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	/* Checks if argument is Digit */
	/* and Adds up the numbers */
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
				continue;
			else
				printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
