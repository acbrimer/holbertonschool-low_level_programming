/**
 * _memset - fills array with char n times
 * @s: input buffer
 * @b: constant byte to fill buffer with
 * @n: chars to fill in buffer
 *
 * Return: buffer with filled constant byte
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
