#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * free_list: a function that frees a list_t list
  * @head: the beginning of the list
  *
  * Return: 0
  */

void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
