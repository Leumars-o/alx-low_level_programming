#include "main.h"

/**
  * _atoi - entry point
  *
  * @s: string pointer to be checked
  *
  * Description: function that converts a string to an integer
  *
  * Return: Always 0.
  */
int _atoi(char *s)
{
	int n = 0;
	int sign = 1;
	int i;
	int digits;

	for (i = 0; s[i] == ' ' || s[i] == '\t'; i++)
		;
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}
	for (; s[i] >= '0' && s[i] <= '9'; i++)
	{
		digits = s[i] - '0';
		n = (n * 10) + digits;
	}
	if (digits == 0)
		return (0);
	return (sign * n);
}
