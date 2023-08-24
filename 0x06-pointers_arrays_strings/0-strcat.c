#include "main.h"

/**
  * _strcat - entry point
  *
  * @dest: Pointer character of destination string
  * @src: Pointer character of source string
  *
  * Description: function that appends the src string to the
  * dest string, overwriting the terminating null byte (\0)
  * at the end of dest, and adds a terminating null byte
  *
  * Return: Pointer to string
  */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int n;
	int dest_len = 0;

	/* Find the lenght of source string */

	while  (*(src + i) != '\0')
	{
		i++;
	}
	/* find the lenght of destination string */
	for (j = 0; *(dest + j) != '\0'; j++)
	{
		dest_len++;
	}
	/* concatenate the two strings */
	dest_len = j;

	for (n = 0; *(src + n) != '\0'; n++)
	{
		dest[j + n] = src[n];
	}

	dest[j + n + 1] = '\0';
	return (dest);
}
