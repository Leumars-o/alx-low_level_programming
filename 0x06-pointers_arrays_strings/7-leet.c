#include "main.h"

/**
  * leet - entry point
  *
  * Description: function that encodes a string into 1337
  *
  * @t: pointer char argument
  *
  * Return: Pointer char
  */
char *leet(char *t)
{
	int i, j;
	char s1[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	char s2[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; *(t + i) != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (*(t + i) == s1[j])
			{
				*(t + i) = s2[j];
			}
		}
	}
	return (t);
}
