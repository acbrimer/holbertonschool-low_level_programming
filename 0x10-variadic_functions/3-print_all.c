#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * _sarg - handles NULL string arg
 * @string: current string arg from va_list
 *
 * Return: "(nil)" for NULL string, else string
*/
char *_sarg(char *string)
{
	if (string == NULL)
		return ("(nil)");
	return (string);
}

/**
 * print_all - prints all args in format specified
 * @format: char list of formats for args
*/
void print_all(const char * const format, ...)
{
	va_list a;
	int i = 0;
	char f;

	if (format == NULL)
		exit(0);
	va_start(a, format);
	while (format[i])
	{
		f = format[i];
		switch (f)
		{
			case 'c':
				printf("%s%c", _SEPARATOR(i, ", "), va_arg(a, int));
				break;
			case 'i':
				printf("%s%d", _SEPARATOR(i, ", "), va_arg(a, int));
				break;
			case 'f':
				printf("%s%f", _SEPARATOR(i, ", "), va_arg(a, double));
				break;
			case 's':
				printf("%s%s", _SEPARATOR(i, ", "), _sarg(va_arg(a, char*)));
				break;
			default:
				break;
		}
		i++;
	}
	putchar('\n');
	va_end(a);
}
