#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - gets function for calc
 * @s: operator
 *
 * Return: pointer to correct op function or NULL
*/
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
		};
	int i;

	for (i = 0; i < 5; i++)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
	}

	return (NULL);
}
