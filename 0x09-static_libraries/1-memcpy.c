#include "main.h"

/**
  * _memcpy - entry point
  *
  * Description: function copies n bytes from memory area src to
  * memory area dest
  *
  * @dest: pointer to be returned
  * @src: memory area containing bytes
  * @n: number of bytes
  *
  * Return: Pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
