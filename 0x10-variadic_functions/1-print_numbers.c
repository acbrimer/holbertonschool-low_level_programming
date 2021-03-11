#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - sums all input params
 * @separator: string to print between numbers
 * @n: number of ints to program
 *
 * Return: int sum of params
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	int i, p;

	va_start(a, n);
	for (p = (int)n, i = 0; p; p--, i++)
		printf("%s%d", i == 0 || separator == 0 ? "" : separator, va_arg(a, int));
	va_end(a);
	putchar('\n');
}
