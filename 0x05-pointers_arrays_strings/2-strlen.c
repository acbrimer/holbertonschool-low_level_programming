/**
 * _strlen - gets string length
 * @s: starting address of string
 *
 * Return: int length of string
*/

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}

	return (l);
}
