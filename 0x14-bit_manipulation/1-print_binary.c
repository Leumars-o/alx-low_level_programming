#include "main.h"

/**
  * print_binary - function that prints the binary representation of a number
  * @n: number to be converted
  * Return: void
  */
void print_binary(unsigned long int n)
{
	int bit_pos, count = 0;
	unsigned long int current;

	for (bit_pos = 63; bit_pos >= 0; bit_pos--)
	{
		current = n >> bit_pos;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
