#include <stdio.h>

/**
 * main - prints sum of even Fibonacci terms < 4m
 *
 * Return: void
*/
int main(void)
{
	long int a = 1, b = 2, n, s;

	n = a + b;	
	while (n < 4000000)
	{
		if (b % 2 == 0)
			s += b;
		n = a + b;
		a = b;
		b = n;
	}
	printf("%ld\n", s);

	return (0);
}
