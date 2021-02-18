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

	while (*(s + i))
	{
		if (*(s + i) >= 97 && *(s + i) <= 122)
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
		if (*(s + i) == '\t')
			*(s + i) = ' ';
		prev = *(s + i);
		i++;
	}

	return (s);
}
