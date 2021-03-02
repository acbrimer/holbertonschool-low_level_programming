#include <stdlib.h>

/**
 * _strdup - copies string using malloc
 * @str: string to copy
 *
 * Return: char * pointer to copied string
*/

char *_strdup(char *str)
{
	int s = 0;
	char *n;

	while (str[s])
		s++;
	if (s == 0)
		return (0);
	n = (char *)malloc(s);

	s = 0;
	while (str[s])
	{
		n[s] = str[s];
		s++;
	}

	return (n);
}
