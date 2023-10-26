#include "main.h"

/**
  * set_bit - function that sets the value of a bit to 1 at a given index
  * @index: index starting from 0 of the bit to be set
  * @n: pointer to the integer to be checked
  * Return: 1 for success, -1 otherwise
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
