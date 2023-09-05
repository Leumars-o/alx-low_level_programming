#include "main.h"
#include <stdlib.h>

/**
  * _strdup - copies the string given as a parameter
  *
  * Description: Function that returns a pointer to a newly allocated
  * space in memory, which contains a copy of the string given as a
  * parameter
  *
  * @str: String parameter
  *
  * Return: NULL if str = NULL or memory insufficient
  * Pointer to array on success
  */
char *_strdup(char *str)
{
	int i;
	char *ptr;
	int size = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; *(str + i) != '\0'; i++)
			size++;
		ptr = (char *)malloc((size * sizeof(char)) + 1);
		if (ptr == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < size; i++)
		{
			*(ptr + i) = *(str + i);
		}
		*(ptr + size) = '\0';
	}
	return (ptr);
}
