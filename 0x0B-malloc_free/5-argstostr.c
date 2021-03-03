#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - gets length of string
 * @s: string to get length of
 *
 * Return: length of string
*/
int _strlen(char *s)
{
	int l = 0;

	while (s[l])
		l++;

	return (l);
}

/**
 * argstostr - concats args from main to string
 * @ac: number of args
 * @av: args array
 *
 * Return: char * pointer to args string
*/
char *argstostr(int ac, char **av)
{
	int a, i, c = 0, s = 0;
	char *str = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
		s += 1 + _strlen(av[a]);
	str = (char *)malloc(s * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		i = 0;
		while (av[a][i])
		{
			*(str + c) = av[a][i];
			c++;
			i++;
		}
		*(str + c) = '\n';
		c++;
	}
	str[c] = '\0';

	return (str);
}
