#include "holberton.h"

/**
 * times_table - prints times table
 *
 * Return: void
*/
void times_table(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		int nn;

		for (nn = 0; nn < 10; nn++)
		{
			int f, l;

			f = (n * nn) / 10;
			l = (n * nn) % 10;
			if (nn > 0)
				_putchar(f == 0 ? ' ' : f + '0');
			_putchar(l + '0');
			if (nn == 9)
			{
				_putchar('\n');
				break;
			}
			_putchar(',');
			_putchar(' ');
		}
	}
}
