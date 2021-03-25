#include "holberton.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts binary string to unsigned int
 * @b: binary string pointer
 *
 * Return: unsigned int base 10 value of b or 0 if failed to convert
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int d = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (!(*b == '0' || *b == '1'))
			return (0);
		d *= 2;
		if (*b++ == '1')
			d++;
	}

	return (d);
}
