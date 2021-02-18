/**
 * _strncpy - copies n chars from src to dest
 * @dest: destination for copy
 * @src: string to copy to dest
 * @n: number of chars to copy from src
 *
 * Return: copied string char*
*/

char *_strncpy(char *dest, char *src, int n)
{
	int s = 0;

	while (*(src + s) && s < n)
	{
		*(dest + s) = *(src + s);
		s++;
	}
	for ( ; s < n; s++)
		*(dest + s) = '\0';

	return (dest);
}
