#include "main.h"

/**
  * print_most_numbers - entry point
  *
  * Description: function that prints the numbers from 0 to 9
  * excluding 2 and 4, followed by a new line
  *
  * Return: Void
  */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar('0' + i);
	}
	_putchar('\n');
}
