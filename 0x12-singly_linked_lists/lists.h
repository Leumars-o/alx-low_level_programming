#ifndef LIST_H
#define LIST_H
#include <stddef.h>

/**
  * struct list_t - singlly linked list
  *
  * Description: structure to a singly linked list node
  * @str: string
  * @len: lenght og the string
  * @next: link to the next node
  */
typedef struct list_t
{
	char *str;
	unsigned int len;
	struct list_t *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
