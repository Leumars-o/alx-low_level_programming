#include "main.h"
#include <stdlib.h>

/**
  * _memset - presets memory with charcter
  *
  * @s: memory to be set
  * @b: char to be set into memory
  * @n: number of times to copy @b
  *
  * Return: Pointer to memory
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
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

	ptr = calloc(nmemb, size);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
