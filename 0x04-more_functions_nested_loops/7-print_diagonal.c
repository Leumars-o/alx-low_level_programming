#include "main.h"

/**
  * print_diagonal - entry point
  *
  * @n: number of times the character '\' should be printed
  *
  * Description: function that draws a diagonal line on the terminal
  *
  * Return: Void
  */
void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
			continue;
		if (n > 1)
		{
			if (i == 1)
			{
			_putchar(92);
			_putchar('\n');
			}
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			if (i == n)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}

