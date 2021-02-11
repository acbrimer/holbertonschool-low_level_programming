#include "holberton.h"
/**
 * print_triangle - prints a triangle
 * @size: size of triangle to print
 *
 * Return: void
*/
void print_triangle(int size)
{
	int i, ii;

	if (size > 0)
		for (i = 0; i < size; i++)
		{
			for (ii = 0; ii < size; ii++)
				_putchar((ii + 1) >= (size - i) ? '#' : ' ');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
