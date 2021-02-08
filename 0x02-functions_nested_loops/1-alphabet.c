#include "holberton.h"

void print_alphabet(void);

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();

    return (0);
}

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
