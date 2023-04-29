#include "main.h"

/**
 * _pow_recursion - a function that returns the value of x raised to the power of y
 * @x: Number Integer
 * @y: Power
 *
 * Return: 1 (success)
 * On error, -1 is returned, and errno is set appropriately.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
