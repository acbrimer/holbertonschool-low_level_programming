#include <stdio.h>

/**
 * main - prints Fibonacci to 50
 *
 * Return: void
*/
int main(void)
{
	long int i, a = 0, b = 1, n = 2;

	for (i = 1; i <= 50; i++)
	{
		printf("%ld", a);
		if (i == 50)
			break;
		printf(", ");
		n = a + b;
		a = b;
		b = n;
	}
	putchar('\n');

	return (0);
}
