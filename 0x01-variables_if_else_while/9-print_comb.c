#include <stdio.h>
#include <stdlib.h>

/**
 *main: Entry point
 *Description: program that prints all possible comnbo of nos.
 *Return: Always 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
