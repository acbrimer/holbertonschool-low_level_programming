#include <stdlib.h>
#include "holberton.h"

/**
 * _puts - prints string using _putchar
 * @str: string to print
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

/**
 * _isnumeric - calls is digit for each char in string
 * @s: string
 *
 * Return: 1 for numeric, 0 for any non-numeric chars
*/
int _isnumeric(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}

	return (1);
}

/**
 * _strlen - gets the length of a string
 * @s: input string
 *
 * Return: length of string
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}

/**
 * rev_string - reverses string at input address
 * @s: pointer to first char of string
 * @len: length of string to reverse
 *
 * Return: void
*/
void rev_string(char *s, int len)
{
	int f, b;
	char t;

	for (f = 0, b = len - 1; f < len / 2; f++, b--)
	{
		t = *(s + b);
		*(s + b) = *(s + f);
		*(s + f) = t;
	}
}

/**
 * _mul - multiplies two numbers
 * @n1: first number
 * @n2: second number
 *
 * Return: int * array of digits for product
*/
int *_mul(char *n1, char *n2)
{
	int l1 = _strlen(n1), l2 = _strlen(n2);
	int i, ii, t = 0,  d1, d2, n;
	int *res = malloc(sizeof(int) * (l1 + l2));

	if (res == NULL)
		exit(98);
	for (i = 0; i < (l1 + l2); i++)
		res[i] = 0;
	if (_isnumeric(n1) * _isnumeric(n2) == 0)
	{
		_puts("Error");
		exit(98);
	}
	rev_string(n1, l1);
	rev_string(n2, l2);
	for (i = 0; i < l1; i++)
	{
		for (ii = 0; ii < l2; ii++)
		{
			d1 = n1[i] - '0';
			d2 = n2[ii] - '0';
			n = d1 * d2;
			res[i + ii] = res[i + ii] + n;
			n = res[i + ii];
			for (t = 0; res[i + ii + t] > 9; t++)
			{
				res[i + ii + t] = res[i + ii + t] % 10;
				res[i + ii + t + 1] = n / 10 + res[i + ii + t + 1];
				n = res[i + ii + t + 1];
			}
		}
	}

	return (res);
}

/**
 * main - reads two numbers from terminal and multiplies
 * @argc: number of args
 * @argv: array of arg vals
 *
 * Return: 0 for success, 98 for failure
*/
int main(int argc, char **argv)
{
	int *res;
	int l, i;

	if (argc != 3)
	{
		_puts("Error");
		return (98);
	}
	res = _mul(argv[1], argv[2]);
	l = (_strlen(argv[1]) + _strlen(argv[2]));
	while (l > 0 && res[l] == 0)
		l--;
	for (i = l; i >= 0; i--)
		_putchar(res[i] + '0');
	_putchar('\n');
	free(res);

	return (0);
}
