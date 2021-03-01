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
 * main - prints min number of coins for input money
 * @argc: number of args
 * @argv: argv[1] amount of money
 *
 * Return: always 0
*/
int main(int argc, char **argv)
{
	int n = 0, c;

	if (argc != 2)
		puts("Error");
	else if (!isnumeric(argv[1]))
		puts("0");
	else
		{
			c = atoi(argv[1]);
			while (c >= 25)
			{
				n++;
				c -= 25;
			}
			while (c >= 10)
			{
				n++;
				c -= 10;
			}
			while (c >= 5)
			{
				n++;
				c -= 5;
			}
			while (c >= 2)
			{
				n++;
				c -= 2;
			}
			n += c;
			printf("%d\n", n);
		}

	return (0);
}
