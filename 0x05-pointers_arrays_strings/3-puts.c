#include "main.h"

/**
  * _puts - entry point
  *
  * Description: function that prints a string
  * followed by a new line to stdout
  *
  * Return: Void
  */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
