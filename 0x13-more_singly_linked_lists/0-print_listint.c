#include "lists.h"
#include <stdio.h>

/**
  * print_listint - functiont that prints all the elements of a listint_t list
  *
  * @h: Pointer to list
  *
  * Return: The number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
