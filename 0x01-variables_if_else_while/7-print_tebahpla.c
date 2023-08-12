#include <stdio.h>
#include <stdlib.h>

/**
  *main - Entry point
  *Description: A program that prints the lowercase alphabet in reverse
  *Return: Always 0
  */
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
		putchar('z' - i);
	putchar('\n');
	return (0);
}
