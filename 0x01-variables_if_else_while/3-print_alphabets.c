#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c, C;

	c = 'a';
	C = 'A';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}
