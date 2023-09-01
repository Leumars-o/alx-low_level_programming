#include "main.h"

/**
  * _strncpy - entry point
  *
  * Description: function that copies a string
  *
  * @dest: pointer char string destination
  * @src: pointer char string source
  * @n: integer byte value of string to be copied
  *
  * Return: Pointer String char
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* copy string characters from src to dest */
	for (i = 0; i < n && *(src + i) != '\0'; i++)
	{
		dest[i] = src[i];
	}
	/* Input null characters where src string < n */
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
