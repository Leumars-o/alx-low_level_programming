#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
  * is_digit - checks if string is digit
  *
  * @n: pointer to string to be checked
  *
  * Return: 1 for digits, 0 otherwise;
  */
int is_digit(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] < '0' || n[i] > '9')
			return (0);
	}
	return (1);
}
/**
  * _strlen - counts the lenght of a string
  *
  * @n: pointer to string to be checked
  *
  * Return: Integer value of string lenght
  */
int _strlen(char *n)
{
	int i = 0;

	while (n[i] != '\0')
		i++;
	return (i);
}
/**
  * error - error handling function
  *
  * Return: Void
  */
void error(void)
{
	printf("Error\n");
	exit(98);
}
/**
  * cleanup - prints a newline and frees memory
  *
  * Description: function that prints a new line before
  * cleaning up memory
  *
  * @result: pointer to memory to clean
  *
  * Return: void
  */
void cleanup(int *result)
{
	_putchar('\n');
	free(result);
}
/**
  * main - multiplies 2 positive numbers
  *
  * Description: Program that multiplies 2 positive numbers
  *
  * @argc: number of parameters parsed with function
  * @argv: array of input parameters
  *
  * Return: int value if success. Error if failed.
  */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	int len1, len2, len, i, carry, digit1, digit2, *result, a = 0;

	num1 = argv[1];
	num2 = argv[2];
	if (argc != 3 || !is_digit(num1) || !is_digit(num2))
		error();
	len1 = _strlen(num1);
	len2 = _strlen(num2);
	len = len1 + len2;
	result = malloc((len + 1) * sizeof(int));
	if (result == NULL)
		return (1);
	for (i = 0; i <= len; i++)
		result[i] = 0;
	for (len1 -= 1; len1 >= 0; len1--)
	{
		digit1 = num1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(num2) - 1; len2 >= 0; len2--)
		{
			digit2 = num2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	cleanup(result);
	return (0);
}
