/**
 * rot13 - returns rot13 of input string
 * @s: input string
 *
 * Return: pointer to input w/ altered rot13 string
*/

char *rot13(char *s)
{
	int i = 0, c;
	char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLM[\\]^_`nopqrstuvwxyzabcdefghijklm";

	while (*(s + i))
	{
		c = *(s + i);
		if (c >= 65 && c <= 122)
			*
			(s + i) = *(rot + (c - 65));
		i++;
	}

	return (s);
}
