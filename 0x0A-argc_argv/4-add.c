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
		if (isdigit(s[i]))
			i++;
		else
			return (0);
	}

	return (1);
}

/**
 * main - gets sum of input numbers
 * @argc: number of args
 * @argv: argv[n > 1] input numbers
 *
 * Return: always 0
*/
int main(int argc, char **argv)
{
	int i, s = 0;

	for (i = 1; i < argc; i++)
	{
		if (isnumeric(argv[i]))
			s += atoi(argv[i]);
		else
		{
			puts("Error");
			return (0);
		}
	}
	printf("%d\n", s);

	return (0);
}
