#include "main.h"
#include <stdio.h>

/**
  * print_buffer - prints a buffer
  *
  * @b: buffer argument
  * @size: buffer size
  *
  * Description: function that prints a buffer
  *
  * Return: Void
  */
void print_buffer(char *b, int size)
{
	int i, j;
	int n = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	do {
		j = size - n < 10 ? size - n : 10;
		printf("%08x: ", n);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
			{
				printf("%02x", *(b + n + i));
			}
			else
			{
				printf(" ");
			}
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int m = *(b + n + i);

			if (m < 32 || m > 132)
			{
				m = '.';
			}
			printf("%c", m);
		}
		printf("\n");
		n += 10;
	} while (n < size);
}

