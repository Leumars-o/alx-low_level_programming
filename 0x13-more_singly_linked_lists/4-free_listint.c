#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_listint - function that frees a listint_t list
  * @head: pointer to head of list
  * Return: void
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;

	while (temp)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
