#include "main.h"

/**
  * _isupper - entry point
  *
  * Description: function that checks for uppercase character
  *
  * @c: character to be checked
  *
  * Return: integer value
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
