#include <stdio.h>

/**
 * print_buffer - prints a buffer from a string input
 * @b: string to print
 * @size: size of buffer
 *
 * Return: void
*/

void print_buffer(char *b, int size)
{
	int i = 0, ii = 0, sp, e;
	char c, s[] = "..........";

	if (size <= 0)
	{
		putchar('\n');
		return;
	}
	while (i < size)
	{
		ii++;
		if (i % 10 == 0)
			printf("%08x:", i);
		if (i % 2 == 0)
			putchar(' ');
		printf("%02x", b[i]);
		c = b[i];
		s[ii - 1] = (c >= '\0' && c <= '\7') || c == '\n' ? '.' : c;
		if (ii == 10)
		{
			printf(" %s\n", s);
			ii = 0;
		}
		i++;
	}
	if (i % 2 == 1)
		printf("  ");
	for (sp = (10 - ii) / 2; sp > 0; sp--)
		printf("     ");
	putchar(' ');
	for (e = 0; e < ii; e++)
		putchar(s[e]);
	putchar('\n');
}
