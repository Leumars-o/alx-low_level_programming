#include "main.h"
#include <stdlib.h>

/**
  * _strlen - string count function
  *
  * Description: function that counts the lenght of a string
  *
  * @s: Pointer string parameter
  *
  * Return: int value;
  */
int _strlen(char *s)
{
	int i;
	int sum = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		sum++;
	}
	return (sum);
}
/**
  * argstostr - concatenates all arguments of the program
  *
  * Description: Function that concatenates all the arguments of a program
  *
  * @ac: integer parameter
  * @av: Double pointer to array
  *
  * Return: Pointer to a new string or NULL if it fails
  */
char *argstostr(int ac, char **av)
{
	int i, j;
	int len = 0;
	char *ptr, *array;

	if (ac == 0 || av == NULL)
		return (NULL);
	/* calculate the lenght of all strings in av */
	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			len += _strlen(av[i]);
		}
	}
	/* allocate memory for all strings in av */
	array = (char *)malloc((len + ac + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);
	ptr = array;
	/* concatenate strings from av to array */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*ptr = av[i][j];
			ptr++;
		}
		*ptr = '\n';
		ptr++;
	}
	*ptr = '\0';
	return (array);
}
