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
 * _wordcount - gets count of words in string sep. by spaces
 * @str: input string
 *
 * Return: int count of words
*/
int _wordcount(char *str)
{
	int i, wc = 0;

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] == ' ' && str[i - 1] != ' ')
			wc++;

	return (wc);
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
	char *s;

	while (str[l + start] != ' ')
		l++;
	s = malloc(l * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
		s[i] = str[i + start];
	s[i] = '\0';

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
	int cc = 0, wc = 0, i = 0, r = 0, l, ii;
	char **res;
	char *tmp;

	cc = _charcount(str);
	wc = _wordcount(str);
	if (str == NULL || cc == 0 || wc == 0)
		return (NULL);
	res = malloc(sizeof(char *) * cc + wc - 1);
	while (str[i])
	{
		if (str[i] == ' ')
			i++;
		else
		{
			l = 0;

			tmp = _strtok(str, i);
			if (tmp == NULL)
				return (NULL);
			while (tmp[l])
				l++;
			res[r] = malloc(sizeof(char) * l);
			for (ii = 0; ii < l; ii++)
				res[r][ii] = tmp[ii];
			res[r][ii] = '\0';
			free(tmp);
			r++;
			i += l;
		}
	}
	if (res == NULL)
		return (NULL);

	return (res);
}
