#include "main.h"

/**
  * _strspn - function that gets the lenght of a prefix substring
  *
  * Description: Function gets lenght of prefix substring and returns
  * the number of bytes in the segment of s which consist only of bytes
  * from 'accept'
  *
  * @s: Pointer to the string to be searched
  * @accept: Pointer representing the set of characters to search for
  *
  * Return: Number of bytes 's'
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j = 0;

	while (*s)
	{
		for (i = 0; *(accept + i); i++)
		{
			if (*s == *(accept + i))
			{
				j++;
				break;
			}
			else if (*(accept + i + 1) == '\0')
				return (j);
		}
		s++;
	}
	return (j);
}
