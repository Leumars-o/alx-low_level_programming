#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - entry point
  *
  * Description: function that prints the minimum number of coins
  * to make change for an amount of money
  *
  * @argc: arument count
  * @argv: argument array
  *
  * Return: 0 - success, 1 - Error
  */
int main(int argc, char *argv[])
{
	int i, num, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	result = 0;
	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= coins[i])
		{
			result++;
			num -= coins[i];
		}
	}
	printf("%d\n", result);
	return (0);
}
