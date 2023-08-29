#include "main.h"

/**
  * set_string - sets the value of a pointer to a char
  *
  * Description: function sets the value of a pointer to a char
  *
  * @s: double pointer char string
  * @to: destination to place value of pointer
  *
  * Return: void
  */
void set_string(char **s, char *to)
{
	*s = to;
}

