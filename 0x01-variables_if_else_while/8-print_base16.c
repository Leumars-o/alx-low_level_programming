#include <stdio.h>
#include <stdlib.h>

/**
  *main - Entry point
  *Description: A program that prints all the numbers of
  *base 16 in lowercase followed by a new line.
  *Return: Always 0
  */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar('0' + i);
	for (i = 0; i <= 5; i++)
		putchar('a' + i);
	putchar('\n');
	return (0);
}
