#include "holberton.h"

/**
 * factorial - gets the factorial of n
 * @n: starting number for factorial
 *
 * Return: int factorial of n
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	if (n == 1)
		return (n);

	return (factorial(n - 1) * n);
}
