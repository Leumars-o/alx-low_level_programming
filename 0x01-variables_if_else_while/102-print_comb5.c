#include <stdio.h>
#include <stdlib.h>

/**
  *main - Entry point
  *
  *Description: a programs that prints all possible combination
  *of 2 digit numbers iterating over combination iterations
  *
  *Return: Always 0
  */
int main(void)
{
	int m, n;

	for (int n = 0; n < 99; n++)
	{
		for (int m = n + 1; m <= 99; m++)
		{
			putchar('0' + n / 10);  /* Print the tens digit of n */
			putchar('0' + n % 10);  /* Print the ones digit of n */
			putchar(' ');
			putchar('0' + m / 10);  /* Print the tens digit of m */
			putchar('0' + m % 10);  /* Print the ones digit of m */

			if (n == 98 && m == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
