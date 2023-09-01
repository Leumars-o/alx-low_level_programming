#include "main.h"

/**
  * _isalpha - entry point
  *
  * @c: character checked
  *
  * Description: function that checks for alphabetic character
  *
  * Return: 1 if c is a letter, 0, otherwise.
  */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
