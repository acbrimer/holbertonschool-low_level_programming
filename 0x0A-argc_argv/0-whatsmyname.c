#include <stdio.h>

/**
 * main - prints name of executable
 * @argc: num of args
 * @argv: value of args
 *
 * Return: always 0
*/

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
