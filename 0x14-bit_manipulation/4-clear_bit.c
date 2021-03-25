#include "holberton.h"

/**
 * clear_bit - sets bit to 0 at index in unsigned int
 * @n: pointer to number to set bit
 * @index: index to set bit
 *
 * Return: 1 or -1 for fail
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	/* 1UL == unsigned long int x = 1 */
	/* mask n using & and all bits set to 1 except bit at index */
	*n &= ~(1UL << index);

	return (1);
}
