/**
 * _strspn - count byte match between inputs
 * @s: initial segment
 * @accept: bytes to count from initial segment
 *
 * Return: count of accept bytes in s
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int si = 0, ai, c = 0;

	while (s[si])
	{
		ai = 0;
		while (accept[ai])
		{
			if (accept[ai] == s[si])
			{
				c++;
				break;
			}
			ai++;
		}
		si++;
	}

	return (si - c);
}
