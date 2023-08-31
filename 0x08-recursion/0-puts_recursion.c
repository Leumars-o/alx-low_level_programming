#include "main.h"

/**
  * _puts_recursion - prints string
  *
  * Description: functiont that prints a string followed by a new line
  *
  * @s: Pointer string parameter
  *
  * Return: Void
  */
void _puts_recursion(char *s)
{

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
}
