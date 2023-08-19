#include "main.h"

/**
  * print_number - entry point
  *
  * @n: parameter to be checked
  *
  * Description: function that prints an integer
  *
  * Return: Void
  */
void print_number(int n)
{
	unsigned int m;

	if (n < 0 && n > -1000)
	{
		m = -n;

		_putchar(45);
		if (m >= 100)
			_putchar((m / 100) % 10 + '0');
		if (m >= 10)
			_putchar((m / 10) % 10 + '0');
		_putchar((m % 10) + '0');

	}
	else if (n >= 0 && n < 10000)
	{
		m = n;

		if (m >= 1000)
			_putchar((m / 1000) + '0');
		if (m >= 100)
			_putchar((m / 100) % 10 + '0');
		if (m >= 10)
			_putchar((m / 10) % 10 + '0');
		_putchar((m % 10) + '0');
	}
}
