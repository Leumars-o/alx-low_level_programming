#include "main.h"

/**
  * _isdigit - entry point
  *
  * Description: function that checks for a digit (0 through 9)
  *
  * @c: parameter to check
  *
  * Return: 1 if Digit, 0 otherwise
  */
int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
