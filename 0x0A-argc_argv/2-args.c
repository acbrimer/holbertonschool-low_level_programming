#include <stdio.h>

/**
 * main - prints all args
 * @argc: num of args
 * @argv: value of args
 *
 * Return: always 0
*/

int main(int argc, char **argv)
{
	int i;

	for (i = 1; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
