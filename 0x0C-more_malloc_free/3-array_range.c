#include "main.h"
#include <stdlib.h>

/**
  * array_range - creates an array of integers
  *
  * Description: Function that creates an array of integers
  *
  * @min: integer lower parameter boundry
  * @max: integer upper parameter boundry
  *
  * Return: Pointer to array
  */
int *array_range(int min, int max)
{
	int *array;
	int *ptr;
	int i, len;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	array = malloc(len * sizeof(int));
	if (array == NULL)
		return (NULL);
	ptr = array;
	for (i = 0; i < len; i++)
	{
		*ptr = min;
		ptr++;
		min++;
	}
	return (array);
}
