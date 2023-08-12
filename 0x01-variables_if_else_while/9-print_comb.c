#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point
 *
 *Description: program that prints all possible comnbo of nos.
 *
 *Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
