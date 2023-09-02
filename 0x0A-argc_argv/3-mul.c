#include "main.h"
#include <stdio.h>

/**
  * _atoi - converts string to int
  *
  * @s: pointer string parameter
  *
  * Return: int value
  */
int _atoi(char *s)
{
	int i = 0;
	int len = 0;
	int m = 0;
	int n = 0;
	int sign = 0;
	int digit = 0;

	while (s[len] != '\0')
		len++;
	while (i < len && m == 0)
	{
		if (s[i] == '-')
			sign++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (sign % 2)
				digit = -digit;
			n = n * 10 + digit;
			m = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			m = 0;
		}
		i++;
	}
	if (m == 0)
		return (0);
	return (n);
}

/**
  * main - entry point
  *
  * Description: function that multiplies two numbers
  *
  * @argc: arument count
  * @argv: argument array
  *
  * Return: Always 0 - success
  */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int product = 0;

	if (argc != 3)
		printf("Error");
	product = _atoi(argv[1]) * _atoi(argv[2]);
	printf("%d\n", product);
	return (0);
}
