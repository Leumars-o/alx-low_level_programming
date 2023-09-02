#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - entry point
  *
  * Description: function that multiplies two numbers
  *
  * @argc: arument count
  * @argv: argument array
  *
  * Return: Always 0 - success
  */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int product = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	product = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", product);
	return (0);
}
