#include "main.h"

/**
  * puts_half - entry point
  *
  * @str: pointer parameter
  *
  * Description: function that prints hald of a string
  *
  * Return: void
  */
void puts_half(char *str)
{
	int m, n;
	int len = 0;

	for (m = 0; str[m] != '\0'; m++)
	{
		len++;
	}
	n = (len / 2);
	if ((len % 2) == 1)
	{
		n = ((len + 1) / 2);
	}
	for (m = n; str[m] != '\0'; m++)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
