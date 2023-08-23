#include "main.h"

/**
  * print_rev - entry point
  *
  * @s: Pointer parameter
  *
  * Description: function that prints a string in reverse
  *
  * Return: Void
  */
void print_rev(char *s)
{
	int i;
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	for (i = len; i >= 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
