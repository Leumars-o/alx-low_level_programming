#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_listint_safe - functino that frees a listint_t list
  * @h: double pointer to head of list
  * Return: the size of the list that was free'd
  */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;

	return (len);
}
