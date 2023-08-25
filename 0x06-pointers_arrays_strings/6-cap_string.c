#include "main.h"

/**
  * cap_string - entry point
  *
  * Description: funtion that capitalized all words of a string
  *
  * @u: Pointer string char to execute
  *
  * Return: Pointer char
  */
char *cap_string(char *u)
{
	int i, j;
	char separators[] = {32, 10, 9, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; *(u + i) != '\0'; i++)
	{
		if (i == 0 && *(u + i) >= 'a' && *(u + i) <= 'z')
		{
			*(u + i) -= ' ';
			continue;
		}
		for (j = 0; j < 13; j++)
		{
			if (*(u + i) == separators[j] && *(u + i + 1) >= 'a' && *(u + i + 1) <= 'z')
			{
				*(u + i + 1) -= ' ';
			}
		}
	}
	return (u);
}
