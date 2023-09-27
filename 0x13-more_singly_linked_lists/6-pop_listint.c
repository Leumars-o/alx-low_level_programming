#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * pop_listint - functiont that deletes the head node of a list
  * of a listint_t linked list
  * @head: double pointer to head of linked list
  * Return: head node's data (n)
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	temp = *head;
	if (!*head || !head)
		return (0);

	temp = temp->next;
	free(*head);
	*head = temp;

	return ((*head)->n);
}
