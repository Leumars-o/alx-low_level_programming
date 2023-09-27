#include "lists.h"
#include <stdio.h>

/**
  * sum_listint - function that returns the sum of all the data(n)
  * of a listint_t linked list
  * @head: pointer to head of list
  * Return: sum of all the data in the list
  */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr;

	if (!head)
		return (0);
	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
