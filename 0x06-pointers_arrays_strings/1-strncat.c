/**
 * _strncat - appends src to dest
 * @dest: target of append
 * @src: string to append
 * @n: bytes to append from src
 *
 * Return: char*
*/

char *_strncat(char *dest, char *src, int n)
{
	int d = 0, s = 0;

	while (*(dest + d))
		d++;
	while (*(src + s) && s < n)
		*(dest + d++) = *(src + s++);

	return (dest);
}
