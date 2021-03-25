#include "holberton.h"

/**
 * print_binary - prints binary of unsigned long int
 * @n: number to print in binary
*/
void print_binary(unsigned long int n)
{
	int i, s = 0;

	if (n == 0)
		_putchar('0');
	else
	{
		for (i = 63; i >= 0; i--)
		{
			if ((!s) && ((n >> i) & 1))
				s = 1;
			if (s)
				_putchar((n >> i) & 1 ? '1' : '0');
		}
	}
}
