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

/**
 * print_alphabet_x10 - calls print_alphabet x10
 *
 * Return: void
*/
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
		print_alphabet();
}
