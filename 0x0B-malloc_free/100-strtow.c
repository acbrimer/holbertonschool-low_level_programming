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
	s = malloc((l + 1) * sizeof(char));
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
	int cc = 0, i = 0, r = 0, len = 0;
	char **res = NULL;
	char *tmp;

	while (str[len])
		len++;
	if (str == NULL || len == 0)
		return (NULL);
	cc = _charcount(str);
	res = malloc(sizeof(char *) * cc + 1);
	while (str[i])
	{
		if (str[i] == ' ')
			i++;
		else
		{
			int l = 0;

			tmp = _strtok(str, i);
			while (tmp[l])
				l++;
			res[r] = tmp;
			r++;
			i += l;
		}
	}

	return (res);
}
