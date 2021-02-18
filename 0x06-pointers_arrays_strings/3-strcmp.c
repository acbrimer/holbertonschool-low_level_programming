/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: int difference between first mismatchd char
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) || *(s2 + i))
	{
		if (*(s1 + i) != *(s2 + i))
			return (*(s1 + i) - *(s2 + i));
		i++;
	}

	return (0);
}
