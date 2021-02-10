#include <stdio.h>

/**
 * main - prints Fibonacci to 50
 *
 * Return: void
*/
int main(void)
{
	unsigned long i = 0;
	/*m used to split to 2 9-digit max segments */
	unsigned long m = 1000000000;
	unsigned long a1, a2, b1, b2, c1, c2;

	printf("1, 2");
	a1 = 1 / m;
	a2 = 1 % m;
	b1 = 2 / m;
	b2 = 2 % m;
	for (i = 3; i < 100; i++)
	{
		/*add first 9 digits of c */
		c1 = (a1 + b1) + ((a2 + b2) / m);
		/*add last 9 digits of c */
		c2 = (a2 + b2) % m;
		if (c1 > 0)
			printf(", %lu%lu", c1, c2);
		else
			printf(", %lu", c2);
		a1 = b1;
		a2 = b2;
		b1 = c1;
		b2 = c2;
	}
	putchar('\n');

	return (0);
}
