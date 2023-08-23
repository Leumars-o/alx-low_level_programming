#include "main.h"

/**
  * rev_string - entry point
  *
  * @s: pointer parameter
  *
  * Description: function that reverses a string
  *
  * Return: Void
  */
void rev_string(char *s)
{
	int i = 0;
	int j;
	char temp = s[0];

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j++)
	{
		i--;
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
	}

}
