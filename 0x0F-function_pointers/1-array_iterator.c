#include <stdio.h>
#include "function_pointer.h"

/**
  * array_iterator - function that executes another function given as parameter
  *
  * Description: function execute a funtion given as a parameter on each
  * of an array
  *
  * @array: pointer to array
  * @size: size of the array
  * @action: pointer to the function you need to use
  *
  * Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
