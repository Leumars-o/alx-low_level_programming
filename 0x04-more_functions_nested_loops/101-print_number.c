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
	if (n < 0 && n > -1000)
	{
		n = -n;

		_putchar(45);
		if (n >= 100)
			_putchar((n / 100) % 10 + '0');
		if (n >= 10)
			_putchar((n / 10) % 10 + '0');
		_putchar((n % 10) + '0');

	}
	else if (n >= 0 && n < 10000)
	{
		if (n >= 1000)
			_putchar((n / 1000) + '0');
		if (n >= 100)
			_putchar((n / 100) % 10 + '0');
		if (n >= 10)
			_putchar((n / 10) % 10 + '0');
		_putchar((n % 10) + '0');
	}
}
