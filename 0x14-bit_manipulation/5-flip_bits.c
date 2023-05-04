#include "main.h"
#include <stdio.h>

/**
 * flip_bits -  function that returns the number of bits
 *              you would need to flip to get from one number to another
 * @n: is the number
 * @m: is the number to flip n to
 *
 * Return: number of bits to flip from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
