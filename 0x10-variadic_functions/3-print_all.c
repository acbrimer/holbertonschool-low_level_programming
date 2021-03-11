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
	int i = 0, l = 0;
	char f;

	if (format != NULL)
	{
		va_start(a, format);
		while (format[i])
		{
			f = format[i];
			switch (f)
			{
				case 'c':
					printf("%s%c", _SEPARATOR(l, ", "), va_arg(a, int));
					l++;
					break;
				case 'i':
					printf("%s%i", _SEPARATOR(l, ", "), va_arg(a, int));
					l++;
					break;
				case 'f':
					printf("%s%f", _SEPARATOR(l, ", "), va_arg(a, double));
					l++;
					break;
				case 's':
					printf("%s%s", _SEPARATOR(l, ", "), _sarg(va_arg(a, char*)));
					l++;
					break;
			}
		i++;
		}
	}
	putchar('\n');
	va_end(a);
}
