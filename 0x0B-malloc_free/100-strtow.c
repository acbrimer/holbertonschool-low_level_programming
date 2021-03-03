#include <stdlib.h>

/**
 * _charcount - counts non-space chars in string
 * @str: input string
 *
 * Return: int count of non-space chars
*/
int _charcount(char *str)
{
	int i, cc = 0;

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] != ' ')
			cc++;

	return (cc);
}

/**
 * _strtok - returns substring until space delim
 * @str: full string to check
 * @start: starting index in string
 *
 * Return: next string until delim
*/
char *_strtok(char *str, int start)
{
	int i, l = 0;
	char *s = NULL;

	while (str[l + start] != ' ')
		l++;
	s = malloc(l * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
		s[i] = str[i + start];
	s[l] = '\0';

	return (s);
}

/**
 * strtow - splits string into array of strings
 * @str: string to split
 *
 * Return: char ** array of strings
*/
char **strtow(char *str)
{
	int cc = 0, i = 0, r = 0;
	char **res = NULL;
	char *tmp;

	cc = _charcount(str);
	if (str == NULL || cc == 0)
		return (NULL);
	res = malloc(sizeof(char *) * cc);
	if (res == NULL)
		return (NULL);
	while (str[i])
	{
		if (str[i] == ' ')
			i++;
		else
		{
			int l = 0;

			tmp = _strtok(str, i);
			if (tmp == NULL)
				return (NULL);
			while (tmp[l])
				l++;
			res[r] = tmp;
			r++;
			i += l;
		}
	}
	res[r] = NULL;

	return (res);
}
