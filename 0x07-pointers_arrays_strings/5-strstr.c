/**
 * _strstr - finds string within string
 * @haystack: string to search
 * @needle: string to match
 *
 * Return: pointer to beginning of substring or null
*/

char *_strstr(char *haystack, char *needle)
{
	unsigned int hi = 0, ni = 0;

	if (!needle[0])
		return (haystack);
	while (haystack[hi])
	{
		ni = haystack[hi] == needle[ni] ? ni + 1 : 0;
		if (!needle[ni])
			return (haystack + (hi + 1 - ni));
		hi++;
	}

	return (0);
}
