#include "main.h"

/**
  * _puts - entry point
  *
  * @str: pointer character to be printed
  *
  * Description: function that prints a string
  * followed by a new line to stdout
  *
  * Return: Void
  */
void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
