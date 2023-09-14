#include <stdio.h>
#include "function_pointers.h"

/**
  * print_name - function that prints a name
  *
  * Description: function that prints a name using pointer to a function
  *
  * @name: pointer to name string
  * @f: pointer to function
  *
  * Return: void
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
