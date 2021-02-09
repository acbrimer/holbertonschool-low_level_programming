#include <stdio.h>

/**
 * main - prints Fibonacci to 50
 *
 * Return: void
*/
int main(void)
{
	double i, a = 1, b = 2, n;

	printf("%.0f, %.0f, ", a, b);
	for (i = 0; i <= 94; i++)
	{
		n = a + b;
		printf("%.0f", n);
		if (i == 94)
			break;
		printf(", ");
		a = b;
		b = n;
	}
	putchar('\n');

	return (0);
}
