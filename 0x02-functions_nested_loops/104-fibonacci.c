#include <stdio.h>

/**
 * main - prints Fibonacci to 50
 *
 * Return: void
*/
int main(void)
{
	float i, a = 1, b = 2, n;

	printf("1, 2, ");
	for (i = a; i <= 96; i++)
	{
		n = a + b;
		printf("%.0f", n);
		if (i == 96)
			break;
		printf(", ");
		a = b;
		b = n;
	}
	putchar('\n');

	return (0);
}
