#include <stdio.h>
#include <stdlib.h>

/**
  *main - entry point
  *Description:  program that prints the alphabet in lowercase followed by a new line
  *Return: Always 0
  */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i == 101 || i == 113)
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
