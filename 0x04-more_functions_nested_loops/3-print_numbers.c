#include "holberton.h"
/**
 * print_numbers - prints 1-9
 *
 * Return: void
*/
void print_numbers(void)
{
	int i;
	for (i = 0; i <= 10; i++)
		_putchar(i == 10 ? '\n' : i + '0');
}
