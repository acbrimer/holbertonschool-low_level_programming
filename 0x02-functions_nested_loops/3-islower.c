#include <stdio.h>

/**
 * _islower - checks for lowercase
 * @c: The char to check
 *
 * Return: 1 for true, 0 for false
*/
int _islower(int c)
{
	return (((c >= 97) && (c <= 122)) ? 1 : 0);
}
