#include <stdlib.h>
#include <stdio.h>

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
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
		s += sizeof(av[a]);
	str = (char *)malloc(s);
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

	return (str);
}
