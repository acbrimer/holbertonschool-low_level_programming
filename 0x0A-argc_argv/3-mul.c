#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * isnumeric- checks if string is numeric
 * @s: string to check
 *
 * Return: 1 for numeric, 0 for non-numeric
*/
int isnumeric(const char *s)
{
	int i = 0;

	while (s[i])
	{
		if ((i == 0 && s[i] == '-') || isdigit(s[i]))
			i++;
		else
			return (0);
	}

	return (1);
}

/**
 * main - multiplies two numbers
 * @argc: number of args
 * @argv: argv[1] for fist number, argv[2] for second number
 *
 * Return: always 0
*/
int main(int argc, char **argv)
{
	if (argc < 3)
		puts("Error");
	else if (isnumeric(argv[1]) && isnumeric(argv[2]))
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
		puts("Error");

	return (0);
}
