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
	int i, k, word_len;
	int words = 0;
	int j = 0;
	char **array, *tmp;

	words = count(str);
	if (words == 0)
		return (NULL);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	if (array == NULL)
		return (NULL);
	tmp = str;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (tmp != &str[i])
			{
				word_len = i - (tmp - str);
				array[j] = allocate_memory(word_len);
				if (array[j] == NULL)
					return (NULL);
				for (k = 0; k < word_len; k++)
					array[j][k] = tmp[k];
				array[j][k] = '\0';
				j++;
			}
			tmp = &str[i + 1];
		}
	}
	array[j] = NULL;
	return (array);
}
