#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - reads calculation args and prints result
 * @argc: number of args
 * @argv: value of args
 *
 * Return: 0 for success, 98-100 for error
*/
int main(int argc, char **argv)
{
	int a, b;
	int (*func)(int a, int b);
	char *s;

	if (argc != 4)
	{
		puts("Error");
		return (98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = argv[2];
	func = get_op_func(s);
	if (func == NULL)
	{
		puts("Error");
		return (99);
	}
	printf("%d\n", (*func)(a, b));

	return (0);
}
