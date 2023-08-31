#include "main.h"

int _strcmp(char *s, int i, int len);
int _strlen(char *s);

/**
  * is_palindrome - palindrome function
  *
  * Description: Function that returns 1 if a string is a palindrome
  * and 0 if not
  *
  * @s: pointer char parameter
  *
  * Return: 1 for success, 0 otherwise
  */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (_strcmp(s, 0, _strlen(s)));
}

/**
  * _strcmp - string comparing function
  *
  * Description: Function that compares values of a string to
  * see if it is a palindrome
  *
  * @s: pointer string char parameter
  * @i: integer count
  * @len: lenght of the string to be compared
  *
  * Return: 1 if palindrome, 0 otherwise
  */
int _strcmp(char *s, int i, int len)
{
	if (i >= len)
		return (1);
	if (*(s + i) != *(s + len - 1))
		return (0);
	return (_strcmp(s, i + 1, len - 1));
}
/**
  * _strlen - checks the lenght of a string
  *
  * Description: Function that checks the lenght of a string
  *
  * @s: pointer char parameter
  *
  * Return: lenght of string
  */
int _strlen(char *s)
{
	if (*s != '\0')
		return (1 + _strlen(s + 1));
	else
		return (0);
}
