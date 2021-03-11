#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _separator - handles first/NULL separator
 * @i: index in print_strings
 * @separator: separator fron call to print_strings
 *
 * Return: separator of empty string
*/
const char *_separator(int i, const char *separator)
{
	return (i == 0 || separator == NULL ? "" : separator);
}

/**
 * _sarg - handles NULL string arg
 * @string: current string arg from va_list
 *
 * Return: "(nil)" for NULL string, else string
*/
char *_sarg(char *string)
{
	return (string == NULL ? "(nil)" : string);
}
/**
 * print_strings - prints all string args
 * @separator: string to print between numbers
 * @n: number of strings to print
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	int i, p;

	va_start(a, n);
	for (p = (int)n, i = 0; p; p--, i++)
		printf("%s%s", _separator(i, separator), _sarg(va_arg(a, char*)));
	va_end(a);
	putchar('\n');
}
