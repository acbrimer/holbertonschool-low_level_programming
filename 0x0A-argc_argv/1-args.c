#include <stdio.h>

/**
 * main - prints number of args
 * @argc: num of args
 * @argv: value of args (unused)
 *
 * Return: always 0
*/

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
