#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates array of initialized chars
  *
  * Description: function that creates an array of chars and
  * initializes it with a specific char.
  *
  * @size: size parameter to be allocated
  * @c: character parameter
  *
  * Return: Pointer to the array on success, NULL otherwise
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = (char *)malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}
	return (ptr);
}
