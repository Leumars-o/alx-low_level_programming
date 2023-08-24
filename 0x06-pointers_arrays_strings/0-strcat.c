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

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[j + i] = src[i];
	}

	dest[j + i + 1] = '\0';
	return (dest);
}
