#include "main.h"

/**
  * _strpbrk - functionthat searches a string for any set of bytes
  *
  * Description: function locates the first occurence in the string s
  * of any of the bytes in the string 'accept'
  *
  * @s: Pointer to string to be searched
  * @accept: Pointer to string to search for
  *
  * Return: Pointer to the byte 's'
  */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; *(accept + i); i++)
		{
			if (*s == *(accept + i))
				return (s);
		}
		s++;
	}
	return ('\0');
}


