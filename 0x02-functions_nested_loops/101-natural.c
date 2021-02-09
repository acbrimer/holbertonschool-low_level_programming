#include <stdio.h>

/**
 * main - print sum of all multiples of 3 && 5 < 1024
 *
 * Return: always 0
*/
int main(void)
{
	int s, i;

	for (i = 1023; i > 0; i--)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			s += i;
	}
	printf("%d\n", s);

	return (0);
}
