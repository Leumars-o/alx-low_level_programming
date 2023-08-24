#include "main.h"

/**
  * _strcpy - entry point
  *
  * Description: function that copies the string pointed to by 
  * src, including the terminating null byte (\0) to the
  * buffer pointed to by dest.
  * 
  * @dest: pointer char parameter
  * @src: pointer char parameter
  *
  * Return: char
  */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}

	for (; j < i; j++)
	{
		dest[j] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
