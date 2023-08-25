#include "main.h"

/**
  * rot13 - entry point
  *
  * Description: function that encodes a string using rot13
  *
  * @n: pointer char string argument
  *
  * Return: Pointer char string
  */
char *rot13(char *n)
{
	int i, j;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; *(n + i) != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (*(n + i) == s1[j])
			{
				*(n + i) = s2[j];
			}
		}
	}
	return (n);
}
