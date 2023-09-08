#include "main.h"
#include <stdlib.h>

/**
  * _calloc - Allocates memory for an array using malloc
  *
  * Description: Function allocates memory for an array using malloc
  *
  * @nmemb: array of @size bytes each
  * @size: size of bytes of the array
  *
  * Return: Pointer to the allocated memory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	ptr = calloc(nmemb, size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
