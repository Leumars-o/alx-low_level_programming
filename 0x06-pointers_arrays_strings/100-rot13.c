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
	int i;

	for (i = 0; *(n + i) != '\0'; i++)
	{
		if ((*(n + i) >= 'a' && *(n + i) <= 'm') ||
				(*(n + i) >= 'A' && *(n + i) <= 'M'))
		{
			*(n + i) += 13;
		}

		else if ((*(n + i) >= 'n' && *(n + i) <= 'z') ||
				(*(n + i) >= 'N' && *(n + i) <= 'Z'))
		{
			*(n + i) -= 13;
		}
	}
	return (n);
}
