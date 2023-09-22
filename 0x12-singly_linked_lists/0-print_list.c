#include "lists.h"
#include <stdio.h>

/**
  * print_list - function that prints all the elemerts of a list_t list
  *
  * @h: pointer to a struct node
  *
  * Return: number of nodes
  */
size_t print_list(const list_t *h)
{
	int i = 0;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
