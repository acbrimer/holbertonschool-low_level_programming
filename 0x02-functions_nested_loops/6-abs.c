#include "holberton.h"

/**
 * _abs - get absolute value
 * @n: Number to get abs value of
 *
 * Return: int
*/
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
