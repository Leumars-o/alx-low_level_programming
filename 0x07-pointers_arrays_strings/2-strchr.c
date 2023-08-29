#include "main.h"

/**
  * _strchr - function that locates a character in a string
  *
  * Description: function locates a character in a string and
  * returns a pointer to the first occurence of the character
  * in the string or NULL if the character is not found
  *
  * @s: Pointer to string
  * @c: character to check occurence
  *
  * Return: Pointer to function
  */
char *_strchr(char *s, char c)
{
	while (*s >= '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return ('\0');
}
