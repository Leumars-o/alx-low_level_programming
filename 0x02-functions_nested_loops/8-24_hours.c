#include "main.h"
/**
  * jack_bauer - entry point
  *
  * Description: function that prints every minute of
  * the day of jack bauer starting from 00:00 to 23:59
  *
  * Return: void
  */
void jack_bauer(void)
{
	int i, j
		;
	i = 0;

	while (i < 24)
	{
		j = 0;

		while (j < 60)
		{
			_putchar((i / 10) + '0');
			_putchar
