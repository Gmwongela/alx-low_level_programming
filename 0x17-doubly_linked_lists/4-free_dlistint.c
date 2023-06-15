#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - funtion that frees a linked dlistint_t list
 * @head: The head of the dlistint_t list
 */

void free_dlistint(dlistint_t *head)
{
        dlistint_t *tmp;

        while (head)
        {
                tmp = head->next;
                free(head);
                head = tmp;
        }
}
