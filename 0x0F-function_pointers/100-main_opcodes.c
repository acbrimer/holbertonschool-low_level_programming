#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcode
 * @argc: number of args
 * @argv: value of args
 *
 * Return: 0 for success, 1-2 for error
*/
int main(int argc, char **argv)
{
	char *main_ptr = (char *)main;
	int i, size;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	size = atoi(argv[1]);
	if (size < 0)
	{
		puts("Error");
		return (2);
	}
	if (size > 0)
		printf("%02hhx", *main_ptr);
	for (i = 1; i < size; i++)
	{
		printf(" %02hhx", main_ptr[i]);
	}
	putchar('\n');

	return (0);
}
