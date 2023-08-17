#include <stdio.h>

/**
  * main - entry point
  *
  * Description: Program that computes and prints the sum
  * of all the multiples of 1024
  *
  * Return: Always 0
  */
int main(void)
{
	int n = 1024;
	int i, j;

	for (i = 0; i < n; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			j += i;
	}
	printf("%d\n", j);
	return (0);
}
