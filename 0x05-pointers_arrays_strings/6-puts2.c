#include "main.h"

/**
  * puts2 - entry point
  *
  * @str: pointer parameter
  *
  * Description: function that prints every other character
  * of a string starting with the first character followed
  * by a new line.
  *
  * Return: void
  */
void puts2(char *str)
{
	int len = 0;
	int i = 0;
	int j;
	char *s = str;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	i = len - 1;

	for (j = 0; j <= i; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}



