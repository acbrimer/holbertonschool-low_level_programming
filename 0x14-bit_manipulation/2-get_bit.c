#include "holberton.h"

/**
 * get_bit - gets 1 or 0 bit val at index in unsigned int
 * @n: number to get binary at index
 * @index: index to return
 *
 * Return: 1 or 0 for success or -1 for fail
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1 ? 1 : 0);
}
