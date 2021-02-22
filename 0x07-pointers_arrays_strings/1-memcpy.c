/**
 * _memcpy - copies n bytes from src to dest
 * @dest: destination buffer for copy
 * @src: source buffer for copy
 * @n: number of bytes to take from src
 *
 * Return: buffer with n bytes copied from src
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
