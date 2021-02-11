#include "holberton.h"
/**
 * print_most_numbers - prints 1-9 w/ out 2,4
 *
 * Return: void
*/
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 10; i++)
		if ((i != 2) && (i != 4))
			_putchar(i == 10 ? '\n' : i + '0');
}
