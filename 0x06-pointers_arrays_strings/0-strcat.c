/**
 * _strcat - appends src to dest
 * @dest: target of append
 * @src: string to append
 *
 * Return: char*
*/

char *_strcat(char *dest, char *src)
{
	int d = 0, s = 0;

	while (*(dest + d))
		d++;
	while (*(src + s))
		*(dest + d++) = *(src + s++);

	return (dest);	
}
