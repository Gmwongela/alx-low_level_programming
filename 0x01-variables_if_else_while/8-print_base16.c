#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int ch;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
