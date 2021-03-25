#include "holberton.h"

/**
 * print_binary - prints binary of unsigned long int
 * @n: number to print in binary
*/
void print_binary(unsigned long int n)
{
	char b[64];
	int i;

	if (n == 0)
		_putchar('0');
	else
	{
		for (i = 0; n > 0; n >>= 1, i++)
			b[i] = (n & 1) + '0';
		for (; i > 0; i--)
			_putchar(b[i - 1]);
	}
}
