#include "main.h"
#include <stdlib.h>

/**
  * str_count - gives the lenght of a string
  *
  * Description: function counts the lenght of a string and
  * returns the value to _strlen
  *
  * @str: Pointer to string parameter
  *
  * Return: _strlen
  */
int str_count(char *str)
{
	int i;
	int _strlen = 0;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_strlen++;
	}
	return (_strlen);
}

/**
  * str_concat - concatenates 2 strings
  *
  * Description: function that allocates space in memory and
  * concatenates 2 strings s1 and s2, and NULL terminated.
  *
  * @s1: pointer to string parameter 1
  * @s2: pointer to string parameter 2
  *
  * Return: NULL if it is an empty string or failure,
  * Pointer to string if success
  *
  */
char *str_concat(char *s1, char *s2)
{
	int i, size, s1_len, s2_len;
	int j = 0;
	char *ptr;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	else
	{
		s1_len = str_count(s1);
		s2_len = str_count(s2);
		size = s1_len + s2_len;
		ptr = (char *)malloc(size * sizeof(char) + 1);
		if (ptr == NULL)
			return (NULL);
		for (i = 0; i < size; i++)
		{
			if (i < s1_len)
			{
				*(ptr + i) = *(s1 + i);
			}
			if (i >= s1_len && i < size)
			{
				*(ptr + i) = *(s2 + j);
				j++;
			}
		}
		*(ptr + size) = '\0';
	}
	return (ptr);
}
