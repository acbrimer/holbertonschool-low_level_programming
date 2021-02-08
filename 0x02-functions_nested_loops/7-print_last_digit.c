#include "holberton.h"

/**
 * print_last_digit - prints and returns last digit
 * @n: full number to get last digit of
 *
 * Return: int last digit of input
*/
int print_last_digit(int n)
{
	int l = n % 10;

	_putchar(n < 0 ? l * -1 + '0' : l + '0');
	return (n < 0 ? l * -1 : l);
}
