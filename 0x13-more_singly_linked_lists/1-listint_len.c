#include "lists.h"
#include <stdio.h>

/**
  * listint_len - function that returns the number of elements
  * in a linked list (listint_t)
  * @h: pointer to head of list
  * Return: number of elements
  */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
