#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char c;

	n = 0;
	c = 'a';
	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	while (c <= 'g')
	{
		putchar(c == 'g' ? '\n' : c);
		c++;
	}

	return (0);
}
