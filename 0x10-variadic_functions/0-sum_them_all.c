#include <stdarg.h>

/**
 * sum_them_all - sums all input params
 * @n: first param
 *
 * Return: int sum of params
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int i = 0, p;

	va_start(args, n);
	for (p = (int)n; p; p--)
		i += va_arg(args, unsigned int);
	va_end(args);

	return (i);
}
