#include "holberton.h"
/**
 * puts_half - prints half of a string
 * @str: string to print
 *
 * Return: void
*/

void puts_half(char *str)
{
	int l = 0, i;

	while (*(str + l) != '\0')
		l++;
	i = l % 2 == 0 ? l / 2 : l - ((l - 1) / 2);
	for (; i < l; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
