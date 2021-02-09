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

	if (n < 98)
	{
		for (i = n + 1; i < 98; i++)
			printf("%d, ", i);
	}
	else if (n > 98)
	{
		for (i = n; i > 98; i--)
			printf("%d, ", i);
	}

	printf("98\n");
}
