#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - allocate memory
  *
  * Description: Function that allocates memory using malloc
  *
  * @b: Unsigned int value
  *
  * Return: pointer to the required amount of memory
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
