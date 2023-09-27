#include "lists.h"
#include <stdio.h>

/**
  * get_nodeint_at_index - function that returns the nth node
  * of a singly linked list listint _t
  * @head: pointer to head of list
  * @index: integer position of node to return
  * Return: nth node of the list, NULL if it does not exist
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	ptr = head;

	while (ptr != NULL && i < index)
	{
		ptr = ptr->next;
		i++;
	}
	return (ptr ? ptr : NULL);
}
