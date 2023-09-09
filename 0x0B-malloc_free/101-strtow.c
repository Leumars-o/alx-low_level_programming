#include <stdlib.h>
#include "main.h"

/**
 * count - helper function to count the number of words in a string
 *
 * @str: string to evaluate
 *
 * Return: number of words
 */
int count(char *str)
{
	int i;
	int w = 0;
	int len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
		if (str[i] != ' ' && str[i + 1] == ' ')
			w++;
	}
	return (w);
}
/**
 * **strtow - splits a string into words
 *
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	int i, j = 0, k = 0, l = 0, len = 0, words, start;
	char **array, *tmp;

	while (*(str + len))
		len++;
	words = count(str);
	if (words == 0)
		return (NULL);
	array = (char **) malloc(sizeof(char *) * (words + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (j != 0)
			{
				tmp = (char *) malloc(sizeof(char) * (j + 1));
				if (tmp == NULL)
					return (NULL);
				start = i - j;
				for (l = 0; l < j; l++)
					tmp[l] = str[start + l];
				tmp[j] = '\0';
				array[k] = tmp;
				k++;
				j = 0;
			}
		}
		else if (j == 0)
		{
			start = i;
			j++;
		}
		else
			j++;
	}
	array[k] = NULL;
	return (array);
}
