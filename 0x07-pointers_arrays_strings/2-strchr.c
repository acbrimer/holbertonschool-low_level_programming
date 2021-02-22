/**
 * _strchr - finds first char in str
 * @s: string to search
 * @c: char to search for
 *
 * Return: pointer to first occurance of char
*/

char *_strchr(char *s, char c)
{
	int i;

	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}

	return (0);
}
