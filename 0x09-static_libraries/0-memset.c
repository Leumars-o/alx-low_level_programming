#include "main.h"

/**
  * _memset - function that fills memory with a constant byte
  *
  * Description: function fills the first n bytes of the momory area
  * pointed to by 's' with the constant byte 'b'
  *
  * @s: Returns a pointer to the memory area 's'
  * @n: number of bytes to be filled
  * @b: constant byte
  *
  * Return: Pointer char s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
