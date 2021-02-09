#include <stdio.h>

/**
 * main - prints Fibonacci to 50
 *
 * Return: void
*/
int main(void)
{
	long int i, a = 1, b = 2, n;

	printf("1, 2, ");
	for (i = a; i <= 48; i++)
	{
		n = a + b;
		printf("%ld", n);
		if (i == 48)
			break;
		printf(", ");
		a = b;
		b = n;
	}
	putchar('\n');

	return (0);
}
