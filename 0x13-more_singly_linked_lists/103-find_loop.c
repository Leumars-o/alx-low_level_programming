#include "lists.h"
#include <stdio.h>

/**
  * find_listint_loop - function that finds the loop in a linked list
  * @head: pointer to head of list
  * Return: address of the node where the loop starts, or NULL, if theres
  * no loop
  */
listint_t *find_listint_loop(listint_t *head)
{
	/* Using Floyd's cycle-finding algorithm */
	listint_t *slow;
	listint_t *fast;

	slow = head;
	fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}
	return (NULL);
}
