#include <stdio.h>

/**
 * main - prints Fibonacci to 50
 *
 * Return: void
*/
int main(void)
{
	long int i, a = 1, b = 2, n;

	printf("%ld, %ld, ", a, b);
	for (i = 0; i < 50; i++)
	{
		n = a + b;
		printf("%ld", n);
		if (i == 49)
			break;
		printf(", ");
		a = b;
		b = n;
	}
	putchar('\n');

	return (0);
}
