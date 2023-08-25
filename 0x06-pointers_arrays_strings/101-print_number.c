#include "main.h"

/**
  * print_number - entry point
  *
  * Description: function that prints an integer
  *
  * @n: int argument value
  *
  * Return: Void
  */
void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		m = -n;

		_putchar(45);
	}
	else
	{
		m = n;
	}
	if (m / 10)
	{
		print_number(m / 10);
	}
	_putchar((m % 10) + '0');
}
