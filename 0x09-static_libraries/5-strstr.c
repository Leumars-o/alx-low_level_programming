#include "main.h"

/**
  * _strstr - function that locates a substring
  *
  * Description: function finds the first occurrence of the substring
  * needle in the string haystack. The terminating null bytes (\0) are
  * not compare
  *
  * @needle: Pointer to substring to search for
  * @haystack: Pointer to string to be searched
  *
  * Return: Pointer to the begining of the located substring
  */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *n = needle;
		char *m = haystack;

		while (*m == *n && *n != '\0')
		{
			m++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return ('\0');
}
