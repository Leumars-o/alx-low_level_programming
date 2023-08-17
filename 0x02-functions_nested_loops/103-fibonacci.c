#include <stdio.h>

/**
  * main - entry point
  *
  * Description: Program that prints the sum of the even Fibonacci numbers
  * between 1 and 4,000,000
  *
  * Return: Always 0
  */
int main(void)
{
	unsigned long i = 2;
	unsigned long fib1 = 1, fib2 = 2, sum;

	do {
		sum = fib1 + fib2;

		if ((sum % 2) == 0)
			i += sum;

		fib1 = fib2;
		fib2 = sum;

	} while (sum < 4000000);

	printf("%lu\n", i);
	return (0);
}

