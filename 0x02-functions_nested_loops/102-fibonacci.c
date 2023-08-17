#include <stdio.h>

/**
  * main - entry point
  *
  * Description: Program that prints the first 50 Fibonacci numbers
  * starting with 1 and 2
  *
  * Return: Always 0
  */
int main(void)
{
	int i;
	int n = 50;
	unsigned long fib1 = 1, fib2 = 2, sum;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%lu, ", fib1);
		else if (i == 1)
			printf("%lu, ", fib2);
		else if (i > 1 && i < n)
		{
			sum = fib1 + fib2;
			if (i == n - 1)
				printf("%lu\n", sum);
			else
			printf("%lu, ", sum);
			fib1 = fib2;
			fib2 = sum;
		}
	}
	return (0);
}

