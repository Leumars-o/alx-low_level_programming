#include "main.h"

/**
  * print_times_table - entry point
  *
  * @n: integer parameter
  *
  * Description: funtion that prints the 9 times table
  *
  * Return: Void
  *
  */
void print_times_table(int n)
{
	int i, j, k = 0;

	for (i = 0; i <= n; i++)
	{
		if (n < 0 || n > 15)
			continue;
		for (k = 0; k <= n; k++)
		{
			j = i * k;
			if (j >= 0 && j < 10)
			{
				if (k != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + j);
			}
			else if (j >= 10 && j < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
			else if (j >= 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((j / 100) + '0');
				_putchar((j / 10) % 10 + '0');
				_putchar((j % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
