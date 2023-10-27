#include "main.h"

/**
  * flip_bits - function that returns the number of bits you would
  * need to flip to get from one number to another
  * @n: number to flip
  * @m: number to flip to
  * Return: number of bits taken
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result, bit_count = 0;

	xor_result = n ^ m;

	while (xor_result != 0)
	{
		bit_count += xor_result & 1;
		xor_result >>= 1;
	}
	return (bit_count);
}
