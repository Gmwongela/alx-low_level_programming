#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function that executes a function given as a parameter on each element of an array
 * @array: the array
 * @size: the size
 * @action: pointer to print in regular
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
