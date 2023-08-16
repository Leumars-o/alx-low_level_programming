#include "main.h"

/**
  * print_alphabet - entry point
  *
  * Description: function that prints the alphabet
  * in lower case
  *
  * Return: void
  */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);

	_putchar('\n');
}
