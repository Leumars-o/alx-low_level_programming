#include <stdio.h>
#include "function_pointers.h"

/**
  * int_index - function that searches for an integer
  *
  * Description: returns the index of the first element
  * for which the @cmp function does not return 0
  *
  * @array: pointer to array
  * @size: number of elements in the array @array
  * @cmp: pointer to the function to be used to compare values
  *
  * Return: Index of first element (success). -1 otherwise
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
