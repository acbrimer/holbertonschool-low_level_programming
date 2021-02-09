#include <stdio.h>

/**
 * main - prints Fibonacci to 50
 *
 * Return: void
*/
int main(void)
{
	double i, a = 0, b = 1, n = 2;

	for (i = 1; i <= 100; i++)
	{
		printf("%.0f", a);
		if (i == 100)
			break;
		printf(", ");
		n = a + b;
		a = b;
		b = n;
	}
	putchar('\n');

	return (0);
}
