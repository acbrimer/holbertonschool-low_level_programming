#include "holberton.h"

/**
 * set_bit - sets bit to 1 at index in unsigned int
 * @n: pointer to number to set bit
 * @index: index to set bit
 *
 * Return: 1 or -1 for fail
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	/* set n to n OR bit mask where all bits are 0 except index */
	*n ^= (1UL << index);

	return (1);
}
