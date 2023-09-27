#include "list.h"
#include <stdio.h>

/**
  * free_listint_safe - functino that frees a listint_t list
  * @head: double pointer to head of list
  * Return: the size of the list that was free'd
  */
size_t free_listint_safe(listint_t **h)
{
	
