#include "holberton.h"

/**
 * print_sign - prints +/-/0
 * @n: Number to check
 *
 * Return: int 0/1/-1
*/
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
