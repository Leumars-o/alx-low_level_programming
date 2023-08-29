#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - print sum of two diagonals
  *
  * Description: function that prints the sum of the two diagonals
  * of a square matrix of integers.
  *
  * @a: pointer to array
  * @size: size of array
  *
  * Return: Void
  */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + 1];
	}
	for (i = 0; i < size; i++)
	{
		sum2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sum1, sum2);
}
