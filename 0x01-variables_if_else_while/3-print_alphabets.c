#include <stdio.h>
#include <stdlib.h>

/**
  *main - entry point
  *Description: program that prints the alphabets in lower and upper case
  *Return: Always 0
  */
int main(void)
{
	int i;
	int j;

	for (i = 97; i < 123; i++)
		putchar(i);

	for (j = 65; j < 91; j++)
		putchar(j);

	putchar('\n');
	return (0);
}
