#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
  * add_node - function that adds a new node at the begining of a list
  * @str: pointer to string that needs to be duplicated
  * @head: pointer to head of the list list_t
  * Return: address of new element, NULL if it fails
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i, len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
