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
