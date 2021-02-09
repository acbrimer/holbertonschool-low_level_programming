#include "holberton.h"

/**
 * print_alphabet - prints lowercase a-z followed by \n
 *
 * Return: void
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= '{'; c++)
		_putchar(c == '{' ? '\n' : c);
}
