#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_list - a function that prints all elements of a list_t list
  * @h: is the singly linked list to print
  * Return: number of nodes
  */

size_t print_list(const list_t *h)
{
	size_t a;

	for (a = 0; h; a++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (a);
}

