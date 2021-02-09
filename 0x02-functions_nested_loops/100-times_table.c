#include "holberton.h"

/**
 * print_times_table - prints times table
 * @n: between 1 and 15
 *
 * Return: void
*/
void print_times_table(int n)
{
	if ((n < 15) && (n > 0))
	{
		int i;

		for (i = 0; i <= n; i++)
		{
			int ii;

			for (ii = 0; ii <= n; ii++)
			{
				int f, m, l, v;

				v = i * ii;
				f = v / 100;
				m = v > 99 ? (v % 100) / 10 : v / 10;
				l = v % 10;
				if (ii > 0)
				{
					_putchar((i * ii) > 99 ? f + '0' : ' ');
					_putchar((i * ii) > 9 ? m + '0' : ' ');
				}
				_putchar(l + '0');
				if (ii == n)
				{
					_putchar('\n');
					break;
				}
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
