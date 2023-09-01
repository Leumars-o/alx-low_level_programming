#include "main.h"

/**
  * _strlen - entry point
  *
  * @s: pointer s
  *
  * Description: function that returns the lenght of a string
  *
  * Return: int
  */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
		s++;
	return (i);
}
