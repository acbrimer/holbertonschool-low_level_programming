#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints all args in format specified
 * @format: char list of formats for args
*/
void print_all(const char * const format, ...)
{
	va_list a;
	int l = 0, i = 0;
	char f;

	while (format[l])
		l++;
	va_start(a, format);
	while (i < l)
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
				printf("%s%s", _SEPARATOR(i, ", "), va_arg(a, char*));
				break;
			default:
				break;
		}
		i++;
	}
	putchar('\n');
	va_end(a);
}
