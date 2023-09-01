#include "main.h"

/**
  * _islower - entry point
  *
  * @c: character to be checked
  *
  * Description: function that checks for lowercase char
  *
  * Return: 1, if c is lowercase, 0 otherwise.
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
