#include "main.h"

/**
  * string_toupper - entry point
  *
  * Description: function that changes all lower case
  * letters of a string to uppercase
  *
  * @u: Pointer string char to execute
  *
  * Return: Pointer char String
  */
char *string_toupper(char *u)
{
	int i;

	for (i = 0; *(u + i) != '\0'; i++)
	{
		if (*(u + i) >= 'A' && *(u + i) <= 'Z')
		{
			continue;
		}
		else if (*(u + i) >= 'a' && *(u + i) <= 'z')
		{
			*(u + i) -= ' ';
		}
		else
		{
			continue;
		}
	}
	return (u);
}
