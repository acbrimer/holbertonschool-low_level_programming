#include "holberton.h"
/**
 * print_rev - prints a string in reverse
 * @s: string to print
 *
 * Return: void
*/

void print_rev(char *s)
{
	int l = 0;
	char *str = s, *rev;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	rev = str + (l - 1);
	while (rev >= str)
	{
		_putchar(*rev);
		rev--;
	}
	_putchar('\n');
}
