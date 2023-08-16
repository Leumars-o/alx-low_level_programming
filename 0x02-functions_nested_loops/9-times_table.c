#include "main.h"

/**
  * times_table - entry point
  *
  * Description: funtion that prints the 9 times table
  *
  * Return: Void
  *
  */
void times_table(void)
{
	int i, k;
	int j = 0;

	for (i = 0; i < 10; i++)
	{
		for (k = 0; k < 10; k++)
		{
			if (j == 0)
			{
				if (k != 0)
				{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				}
				_putchar('0');

			}
			else if (j > 0 && j < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + j);

			}

			else if (j >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}

			j += i;
		}
		
		j = 0;
		_putchar('\n');
	}
}
