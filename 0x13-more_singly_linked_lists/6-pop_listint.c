#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n)
 * @head: pointer to address of the head of the listint_t list
 *
 * Return: returns the head node’s data (n) otherwise return 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (*head == NULL)
		return (0);

	tmp = *head;
	i = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (i);
}
