#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds two ints
 * @a: first int
 * @b: second int
 *
 * Return: a + b
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two ints
 * @a: first int
 * @b: second int
 *
 * Return: a - b
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two ints
 * @a: first int
 * @b: second int
 *
 * Return: a * b
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b if b != 0
 * @a: first int
 * @b: second int (check for 0)
 *
 * Return: a / b if b != 0, else exit with error 100
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - gets the mod of two ints
 * @a: first int
 * @b: second int
 *
 * Return: a % b
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a % b);
}
