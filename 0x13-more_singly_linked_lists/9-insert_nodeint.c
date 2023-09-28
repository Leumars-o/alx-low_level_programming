#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * insert_nodeint_at_index - function that inserts a new node at
  * a given position
  *
  * @head: double pointer to head of a list
  * @idx: index position to insert node
  * @n: value to be inserted in the node
  *
  * Return: Address of the new node or NULL if failed
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	listint_t *temp;

	ptr = *head;
	temp = malloc(sizeof(listint_t));
	if (temp == NULL || head == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;

	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}
	while (idx > 1)
	{
		if (ptr == NULL)
		{
			free(temp);
			return (NULL);
		}
		ptr = ptr->next;
		idx--;
	}
	temp->next = ptr->next;
	ptr->next = temp;
	return (temp);
}
