#include <stdio.h>

/**
  * main - entry point
  *
  * Description: Program that prints numbers from 1 to 100,
  * followed by a new line,
  * but for multiples of 3, prints Fizz and multiples of 5
  * prints Buzz, and for
  * multiples of 3 and 5, prints FizzBuzz.
  *
  * Return: Always 0
  */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}

		else if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
