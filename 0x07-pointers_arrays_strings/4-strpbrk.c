/**
 * _strpbrk - gets first match to any chars in accept
 * @s: string to search
 * @accept: string to match
 *
 * Return: pointer to s first match accept or null
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int si = 0, ai;

	while (s[si])
	{
		ai = 0;
		while (accept[ai])
		{
			if (accept[ai] == s[si])
				return (s + si);
			ai++;
		}
		si++;
	}

	return (0);
}
