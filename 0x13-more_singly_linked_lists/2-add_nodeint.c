#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - a function that adds a new node at the beginning of a listint_t list
 * @head: pointer to address of the head of the listint_t list
 * @n: integer for the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
