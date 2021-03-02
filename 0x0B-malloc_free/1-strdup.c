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
	char *n = NULL;

	if (str == NULL)
		return (NULL);
	while (str[s])
		s++;
	if (s == 0)
		return (NULL);
	n = (char *)malloc(s);
	if (n == NULL)
		return (NULL);
	s = 0;
	while (str[s])
	{
		n[s] = str[s];
		s++;
	}

	n[s] = '\0';

	return (n);
}
