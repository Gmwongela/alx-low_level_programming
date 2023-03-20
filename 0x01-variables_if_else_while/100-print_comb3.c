#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 01; n <= 99; n++)
	{
		putchar(n + 48);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
