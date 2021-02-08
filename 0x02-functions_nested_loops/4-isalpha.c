/**
 * _islower - checks for lowercase
 * @c: The char to check
 *
 * Return: 1 for lowercase, else 0
*/
int _islower(int c)
{
	return (((c >= 97) && (c <= 122)) ? 1 : 0);
}

/**
 * _isupper - checks for uppercase
 * @c: The char to check
 *
 * Return: 1 for uppercase, else 0
*/
int _isupper(int c)
{
	return (((c >= 65) && (c <= 90)) ? 1 : 0);
}

/**
 * _isalpha - check _islower | _isupper
 * @c: The char to check
 *
 * Return: 1 for alpha, else 0
*/
int _isalpha(int c)
{
	return (_islower(c) | _isupper(c));
}
