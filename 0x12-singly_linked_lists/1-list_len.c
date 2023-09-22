#include "lists.h"
#include <stdlib.h>

/**
 * list_len - function that returns the number of elements
 * in a linked list list_t
 *
 * @h: pointer to linked list
 *
 * Return: number of elements in list_t
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
