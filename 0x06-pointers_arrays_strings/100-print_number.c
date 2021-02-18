#include "holberton.h"
/**
 * print_number - prints char digits of an int
 * @n: int to print
 *
 * Return: void
*/

void print_number(int n)
{
	int i, c = n, d;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
		_putchar('-');
	for (i = 1000000000; i >= 1; i /= 10)
	{
		if ((n >= 0 && n >= i) || (n < 0 && n <= -i))
		{
			d = c / i;
			_putchar((d < 0 ? -d : d) + '0');
			c = d == 0 ? c : c - (d * i);
		}
	}
}
