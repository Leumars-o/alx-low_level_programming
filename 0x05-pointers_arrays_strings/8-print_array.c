#include <stdio.h>
#include "main.h"

/**
  * print_array - entry point
  *
  * @a: pointer parameter a
  * @n: integer parameter
  *
  * Description: function that prints n elements of
  * an array of integers
  *
  * Return: void
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
