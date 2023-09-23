#include "lists.h"
#include <stdlib.h>

/**
  * free_list - function that frees a list list_t
  * @head: pointer to head of list to be freed
  * Return: void
  */
void free_list(list_t *head)
{
	list_t *current;
	list_t *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
