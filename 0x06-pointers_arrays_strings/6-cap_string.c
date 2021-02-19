/**
 * cap_string - converts first char of words to upper
 * @s: input string to convert
 *
 * Return: pointer to input string
*/

char *cap_string(char *s)
{
	int i = 1;
	char prev;

	*s = *s >= 'a' && *s <= 'z' ? *s - 32 : *s;
	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
		switch (prev)
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				*(s + i) = *(s + i) - 32;
			default:
				*(s + i) = *(s + i);
		}
		}
		prev = *(s + i);
		i++;
	}

	return (s);
}
