#include <stdio.h>

/**
 * print_to_98 - prints numbers between n and 98
 * @n: print from number
 *
 * Return: void
*/
void print_to_98(int n)
{
	int i;

	for (i = n; i > 98 ? i > 99 : i < 99; n > 98 ? i-- : i++)
	{
		if (i == 98)
			puts("98");
		else
			printf("%d, ", i);
	}
}
