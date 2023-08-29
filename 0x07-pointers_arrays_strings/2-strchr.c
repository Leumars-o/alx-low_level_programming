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
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	return ('\0');
}
