#include <stdio.h>
#include "main.h"

/**
  * print_to_98 - entry point
  *
  * @n: interger parameter
  *
  * Description: function that prints all natural numbers form n to 98
  *
  * Return: Void
  *
  */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
				printf("%d\n", i);
			else
				printf("%d, ", i);
		}
	}
	else if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d\n", i);
		}

	} 
}
