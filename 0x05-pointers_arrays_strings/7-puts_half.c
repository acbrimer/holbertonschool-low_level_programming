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
	for (i = 0; i < l / 2; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
