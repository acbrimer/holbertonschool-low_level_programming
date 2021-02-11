#include "holberton.h"
/**
 * print_square - prints a size x size square
 * @size: size of square to print
 *
 * Return: void
*/
void print_square(int size)
{
	int i, ii;

	if (size > 0)
		for (i = 0; i < size; i++)
		{
			for (ii = 0; ii < size; ii++)
				_putchar('#');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
