#include "main.h"

/**
  * _strcmp - entry point
  *
  * Description: function that compares 2 strings
  *
  * @s1: first pointer int to be compared
  * @s2: second pointer int to be compared
  *
  * Return: int value
  */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; *(s2 + i) != '\0'; i++)
	{
		if (*(s1 + i) < *(s2 + i))
		{
			return (-1);
		}
		else if (*(s1 + i) == *(s2 + i))
		{
			continue;
		}
		else if (*(s1 + i) > *(s2 + i))
		{
			return (1);
		}
	}
	return (0);
}

