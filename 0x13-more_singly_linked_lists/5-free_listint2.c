#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_listint2 - function that frees a listint_t list
  * @head: double pointer to list head
  * Return: void
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return;
	temp = *head;

	while (temp)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
