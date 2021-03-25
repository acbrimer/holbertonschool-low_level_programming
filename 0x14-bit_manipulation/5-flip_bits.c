#include "holberton.h"

/**
 * flip_bits - counts unequal bit values between n and m
 * @n: number 1
 * @m: number 2
 *
 * Return: count of mismatched bits between m and n
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int b = 0, i;

	for (i = 0; i < 64; i++)
		if (((n >> i) & 1) != ((m >> i) & 1))
			b++;

	return (b);
}
