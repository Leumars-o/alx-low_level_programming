#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * add_nodeint_end - function that addsa a new node at the end of a list
  * @head: double pointer to head of list
  * @n: integer value to be added
  * Return: Address of the new element, NULL if failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;

		ptr->next = temp;
	}
	return (temp);
}
