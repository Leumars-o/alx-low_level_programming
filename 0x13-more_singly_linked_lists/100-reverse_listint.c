#include "lists.h"

/**
  * reverse_listint - function that reverses a listint_t linked list
  *
  * @head: double pointer to head of list
  *
  * Return: pointer to the first node of the reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv;
	listint_t *nxt;

	prv = NULL;
	nxt = NULL;
	
	while (*head)
	{
		nxt = (*head)->next;
		(*head)->next = prv;
		prv = *head;
		*head = nxt;
	}
	*head = prv;
	return (*head);
}
