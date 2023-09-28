#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * delete_nodeint_at_index - function that deletes the node at index of
  * a list listint_t linked list
  *
  * @head: double pointer to head of list
  * @index: index of the node that should be deleted
  *
  * Return: 1 - success, -1 failed.
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr;
	listint_t *ptr2;

	ptr = *head;
	ptr2 = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		ptr = NULL;
		return (1);
	}
	while (index != 0)
	{
		if (!ptr || !(ptr->next))
			return (-1);
		ptr2 = ptr;
		ptr = ptr->next;
		index--;
	}
	ptr2->next = ptr->next;
	free(ptr);
	ptr = NULL;

	return (1);
}
