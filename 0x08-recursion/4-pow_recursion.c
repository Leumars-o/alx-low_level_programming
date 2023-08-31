#include "main.h"

/**
  * _pow_recursion - raises the power of x to y
  *
  * Description: Function that returns the value of x raised
  * to the power of y
  *
  * @x: int parameter to raise
  * @y: int parameter to be raised to
  *
  * Return: int value
  */
int _pow_recursion(int x, int y)
{
	int result;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y > 0)
	{
		result = x *  _pow_recursion(x, y - 1);
	}
	return (result);
}
