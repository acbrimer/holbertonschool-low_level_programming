#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 99; n++)
	{
		int nn;

		for (nn = 0; nn < 100; nn++)
		{
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			putchar(' ');
			putchar((nn / 10) + '0');
			putchar((nn % 10) + '0');
			if ((n == 98) && (nn == 99))
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
