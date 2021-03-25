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
	unsigned long int mask = 1;
	unsigned int i;

	if (index > 63)
		return (-1);
	for (i = 0; i < index; i++)
		mask <<= 1;
	*n = (*n ^ mask);

	return (1);
}
