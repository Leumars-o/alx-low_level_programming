#include "main.h"

int _sqrt_recursion(int n);
int sqrt_check(int n, int i);

/**
  * _sqrt_recursion - checks for square root
  *
  * Description: returns the square root of a number
  *
  * @n: integer parameter
  *
  * Return: int value
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_check(n, 0));
}

/**
  * sqrt_check - calculates square root
  *
  * Description: functiont that calculates the square root of a number
  *
  * @n: integer parameter
  * @i: iteration counter
  *
  * Return: int value
  */
int sqrt_check(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_check(n, i + 1));
}
