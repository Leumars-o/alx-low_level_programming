#include "main.h"

/**
  * factorial - calculate the factorial of a number
  *
  * Description: Function that returns the factorial of a given number
  *
  * @n: Integer parameter
  *
  * Return: Factotial value
  */
int factorial(int n)
{
	int result;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	if (n > 1)
	{
		result = n * factorial(n - 1);
	}
	return (result);
}
