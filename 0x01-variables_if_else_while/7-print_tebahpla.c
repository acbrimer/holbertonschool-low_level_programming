#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 'z';
	while (c >= '`')
	{
		putchar(c == '`' ? '\n' : c);
		c--;
	}

	return (0);
}
