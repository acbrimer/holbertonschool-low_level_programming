#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * 2-print_alphabet.c
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* get last digit remainedr of n/10 */
	lastDigit = n % 10;
	if (lastDigit == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	else if (lastDigit < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
	else
		printf("Last digit of %d is %d and is and is greater than 5\n", n, lastDigit);
	return (0);
}
