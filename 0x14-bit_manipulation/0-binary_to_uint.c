#include "main.h"

/**
  * binary_to_uint - function that converts a binary number to an
  * unsigned int
  *
  * @b: pointer to a string of 0 and 1 chars
  *
  * Return: The converted number, 0 if theres 1 or more chars
  * int the string thats not 0 or 1
  */
unsigned int binary_to_uint(const char *b)
{
	int i, len = 0;
	unsigned int decimal = 0;
	unsigned int power = 1;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
		len++;
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		if (b[i] == '1')
			decimal += power;
		power *= 2;
	}
	return (decimal);
}
