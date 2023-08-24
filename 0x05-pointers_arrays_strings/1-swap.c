#include "main.h"

/**
  * swap_int - entry point
  *
  * @a: pointer a
  * @b: pointer b
  *
  * Description: function that swaps the values of two integers
  *
  * Return: Void
  */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
