#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - function returns the number of elements
 * in a linked dlistint_t list
 * @h: The head of the dlistint_t list
 *
 * Return: Number of elements in the dlistint_t list
 */

size_t dlistint_len(const dlistint_t *h)
{
        size_t nodes = 0;

        while (h)
        {
                nodes++;
                h = h->next;
        }

        return (nodes);
}
