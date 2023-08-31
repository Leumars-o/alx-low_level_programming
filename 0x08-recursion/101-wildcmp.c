#include "main.h"

/**
  * wildcmp - comparing recursion
  *
  * Description: function that compares two strings
  *
  * @s1: pointer char to be compared
  * @s2: pointer char to be compared
  *
  * Return: 1 if identical otherwise 0
  */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
			return (wildcmp(s1, s2 + 1));
		return (*s2 == '\0');
	}
	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
