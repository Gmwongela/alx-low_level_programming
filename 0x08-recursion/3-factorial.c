#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number * @n: integer
 *
 * Return: 1 (success)
 * On error, -1 is returned, and errno is set appropriately.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
