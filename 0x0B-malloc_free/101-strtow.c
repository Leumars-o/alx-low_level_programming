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
  * allocate_memory - allocates memory
  *
  * @len: lenght of memory to be allocated
  *
  * Return: Pointer char
  */
char *allocate_memory(int len)
{
	char *word = (char *)malloc(sizeof(char) * (len + 1));

	if (word == NULL)
		return (NULL);
	return (word);
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
	int i, j = 0, k = 0, len = 0, words, start, end;
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
			if (j)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (j + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				array[k] = tmp - j;
				k++;
				j = 0;
			}
		}
		else if (j++ == 0)
			start = i;
	}
	array[k] = NULL;
	return (array);
}
