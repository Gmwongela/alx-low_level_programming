#include "function_pointers.h"
#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - function that returns the addition of two numbers
 * @a: first number
 * @b: second number
 * Return: 0
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - fucntion that returns the subtraction of two numbers
 * @a: first number
 * @b: second number
 * Return: 0
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that returns the product of two numbers
 * @a: first number
 * @b: second number
 * Return: 0
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that returns the division of two numbers
 * @a: first number
 * @b: second number
 * Return: 0
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function that retruns remainder of the division of two numbers
 * @a: first number
 * @b: second number
 * Return: 0
 */
int op_mod(int a, int b)
{
	return (a % b);
}
