#include "holberton.h"
/**
 * print_diagonal - prints a diagonal line in terminal
 * @n: number of lines to print
 *
 * Return: void
*/
void print_diagonal(int n)
{
	int i, ii;

	if (n > 0)
		for (i = 0; i < n; i++)
		{
			for (ii = 0; ii < i; ii++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
