#include <stdio.h>

/**
 * main - Entry point
 * prints size of types: char, int, long int, long long int, & float
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	long int longIntType;
	long long int longerIntType;
	float floatType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longIntType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longerIntType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
