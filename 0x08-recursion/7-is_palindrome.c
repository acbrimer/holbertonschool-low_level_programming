/**
 * palindrome_checker - recursive function to compare chars
 * @s: string to check
 * @l: string length
 * @i: current recursive loop
 *
 * Return: 1 if s is palindrome, else 0
*/
int palindrome_checker(char *s, int l, int i)
{
	if (s[i] != s[l - 1 - i])
		return (0);
	if (i >= l / 2)
		return (1);
	return (palindrome_checker(s, l, i + 1));
}

/**
 * is_palindrome - gets length & calls recursive to determine if palindrome
 * @s: string to check
 *
 * Return: 1 if s is palindrome, else 0
*/
int is_palindrome(char *s)
{
	int l = 0;

	while (s[l])
		l++;

	return (palindrome_checker(s, l, 0));
}
