/**
 * _strcpy - copies a string
 * @dest: pointer to destination
 * @src: source string
 *
 * Return: char* from dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i + 1) = '\0';

	return (dest);
}
