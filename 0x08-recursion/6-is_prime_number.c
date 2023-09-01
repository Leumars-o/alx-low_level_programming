#include "main.h"

int is_prime_number(int n);
int prime_check(int i, int x);

/**
  * is_prime_number - prime number checker
  *
  * Description: function that returns 1 if the integer is a
  * prime number, otherwise 0
  *
  * @n: integer parameter to evaluate
  *
  * Return: 1 if the integer is a prime number, otherwise 0
  */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_check(n - 1, n));
}
/**
  * prime_check - prime number calculator
  *
  * Description: function that calculates for the possibility
  * of a prime number
  *
  * @x: integer parameter
  * @i: int iteration
  *
  * Return: prime_number value
  */
int prime_check(int i, int x)
{
	if (i == 1)
		return (1);
	if (x % i == 0 && i > 0)
		return (0);
	return (prime_check(i - 1, x));
}
