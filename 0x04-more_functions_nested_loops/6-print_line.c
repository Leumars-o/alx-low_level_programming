#include "main.h"

/**
  * print_line - entry point
  *
  * Description: function that draws a straight line in the terminal
  *
  * @n: number of times the character '_' should be printed
  *
  * Return: Void
  */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
			continue;
		_putchar('_');
	}
	_putchar('\n');
}
