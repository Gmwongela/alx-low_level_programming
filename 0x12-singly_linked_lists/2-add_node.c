#include "lists.h"
#include <stdlib.h>
/**
  * _strlen - gets length of the string
  * @s: string
  * Return: length of the string
  */
int _strlen(const char *s)
{
	int a;

	for (a = 0; s[a]; a++)
		;
	return (a);
}
/**
  * add_node: a function that adds a new node at the beginning of a list_t list
  * @head: current position in the list
  * @str: string to add to the head
  * Return: pointer to current position in list
  */

list_t *add_node(list_t **head, const char *str)
{
	int a, len;
	char *content;
	list_t *new;

	if (str == NULL || head == NULL)
		return (NULL);
	len = _strlen(str);
	new = *head;
	content = malloc((len + 1) * sizeof(char));
	if (content == NULL)
		return (NULL);
	for (a = 0; str[a]; a++)
		content[a] = str[a];
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(content);
		return (NULL);
	}
	new->str = content;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
