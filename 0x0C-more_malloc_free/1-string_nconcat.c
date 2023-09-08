#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - function that concatenates 2 strings
  *
  * Description: Function concatenates 2 strings to a newly allocated space
  * in memory which contain s1 followed by the first n bytes of s2 and NULL
  * terminated
  *
  * @s1: Pointer string parameter 1
  * @s2: Pointer string parameter2
  * @n: number of characters of s2 to concatenate
  *
  * Return: Pointer to char
  *
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *_concat, *ptr;
	unsigned int len1 = 0, len2 = 0, i = 0;

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
		n = len2;
	_concat = malloc(sizeof(char) * (len1 + n + 1));
	if (_concat == NULL)
		return (NULL);
	ptr = _concat;
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		ptr[i + len1] = s2[i];
	}
	ptr[len1 + n] = '\0';
	return (_concat);
}
