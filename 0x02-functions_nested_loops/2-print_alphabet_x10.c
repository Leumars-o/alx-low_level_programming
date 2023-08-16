#include "main.h"

/**
  * print_alphabet_x10 - entry point
  *
  * Description: function that prints the alphabet
  * 10 times in lowercase
  *
  * Return: void
  */
void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);

		_putchar('\n');
	}
}
