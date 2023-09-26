#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * add_nodeint - function that adds a new node at the beginning
  * of a listint_t list.
  * @head: Double pointer to head of list
  * @n: integer value to be added
  * Return: The address of the new element, or NULL if failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;

	return (*head);
}
