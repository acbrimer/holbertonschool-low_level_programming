/**
 * string_toupper - converts alpha chars to upper
 * @s: input string to convert
 *
 * Return: pointer to input string
*/

char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) >= 97 && *(s + i) <= 122)
			*(s + i) = (*(s + i) - 32);
		i++;
	}

	return (s);
}
