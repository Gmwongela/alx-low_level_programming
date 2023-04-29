#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: string
 *
 * Return: 1 (success)
 * On error, -1 is returned, and errno is set appropriately.
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
