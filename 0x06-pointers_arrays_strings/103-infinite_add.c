#include "main.h"

/**
  * reverse_str - entry point
  *
  * Description: function that reverses the content of an array
  * of integers
  *
  * @a: a string of integers
  *
  * Return: Void
  */
void reverse_str(char *a)
{
	int i = 0;
	int n = 0;
	int temp;

	while (*(a + i) != '\0')
	{
		n++;
	}
	n--;
	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}

/**
  * infinite_add - entry point
  *
  * Description: function that adds two numbers
  *
  * @n1: argument-1 to be added
  * @n2: argument-2 to be added
  * @r: resulr of n1 + n2
  * @size_r: buffer size
  *
  * Return: pointer to char function
  */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, digits = 0;
	int s1 = 0;
	int s2 = 0;
	int overflow = 0, temp = 0;

	while (*(n1 + i) != 0)
		i++;
	i--;
	while (*(n2 + j) != 0)
		j++;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || overflow == 1)
	{
		if (i < 0)
			s1 = 0;
		else
			s1 = *(n1 + i) - '0';
		if (j < 0)
			s2 = 0;
		else
			s2 = *(n2 + i) - '0';
		temp = s1 + s2 + overflow;
		if (temp >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp % 10) + '0';
		digits++;
		j--;
		i--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	reverse_str(r);
	return (r);
}
