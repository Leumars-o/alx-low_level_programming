#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
  * add_node_end - function that adds a new node to the end
  * of a list list_t
  * @head: pointer to the head of the list
  * @str: pointer to string to insert
  * Return: address of the new element, NULL if failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *current;
	int i, len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;

	current->next = new;
	return (new);
}
