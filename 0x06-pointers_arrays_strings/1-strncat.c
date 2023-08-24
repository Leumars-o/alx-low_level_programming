#include "main.h"

/**
  * _strncat - entry point
  *
  * Description: function that concatenates 2 strings
  *
  * @dest: pointer char with returned string
  * @src: pointer char with string to be concatenated
  * @n: most amount of bytes to be used from src
  *
  * Return: Pointer char String
  */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j = 0;
	int dest_len = 0;

	/* find the lenght of destination string */
	for (j = 0; *(dest + j) != '\0'; j++)
	{
		dest_len++;
	}
	/* concatenate the two strings */
	dest_len = j;

	for (i = 0; i < n && *(src + i) != '\0'; i++)
	{
		dest[j + i] = src[i];
	}

	dest[j + i] = '\0';
	return (dest);
}
