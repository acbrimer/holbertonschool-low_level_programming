#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 0;
	while (n < 100)
	{
		/* f and l for first/last digits */
		int f, l;

		f = n / 10;
		l = n % 10;
		if (n < ((l * 10) + f))
		{
			putchar(f + '0');
			putchar(l + '0');
			if (n < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		n++;
	}
	putchar('\n');

	return (0);
}
