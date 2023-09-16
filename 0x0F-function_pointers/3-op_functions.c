#include <stdio.h>
#include "3-calc.h"

/**
  * op_add - function returns the result of addition
  * of 2 integers a and b
  *
  * @a: integer parameter 1
  * @b: integer parameter 2
  *
  * Return: result
  */
int op_add(int a, int b)
{
	int result;

	result = (a + b);
	return (result);
}
/**
  * op_sub - function returns the result of subtraction
  * of 2 integers a and b
  *
  * @a: integer parameter 1
  * @b: integer parameter 2
  *
  * Return: result
  */
int op_sub(int a, int b)
{
	int result;

	result = (a - b);
	return (result);
}
/**
  * op_mul - function returns the result of multiplication
  * of 2 integers a and b
  *
  * @a: integer parameter 1
  * @b: integer parameter 2
  *
  * Return: result
  */
int op_mul(int a, int b)
{
	int result;

	result = (a * b);
	return (result);
}
/**
  * op_div - function returns the result of division of
  * 2 integers a and b
  *
  * @a: integer parameter 1
  * @b: integer parameter 2
  *
  * Return: result
  */
int op_div(int a, int b)
{
	int result;

	result = (a / b);
	return (result);
}
/**
  * op_mod - function that returns the remainder of the
  * division of 2 integers a and b
  *
  * @a: integer parameter 1
  * @b: integer parameter 2
  *
  * Return: result
  */
int op_mod(int a, int b)
{
	int result;

	result = (a % b);
	return (result);
}
