#include "main.h"

/**
  * print_triangle - entry point
  *
  * @size: the size of the triangle
  *
  * Description: function that prints a triangle
  *
  * Return: Void
  */
void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j < size; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
