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

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
					_putchar(92);
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
