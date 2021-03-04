#include <stdlib.h>

/**
 * string_nconcat - concats s1 & n byets of s2 to new address
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concat
 *
 * Return: char * pointer to new string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1 = 0, l2 = 0, a, b;
	char *res;

	if (s1 != NULL)
		while (s1[l1])
			l1++;
	if (s2 != NULL)
		while (s2[l2])
			l2++;
	l2 = n < l2 ? n : l2;
	res = malloc(l1 + l2 + 1);
	if (res == NULL)
		return (NULL);
	for (a = 0; a < l1; a++)
		res[a] = s1[a];
	for (b = 0; b < l2; b++)
		res[a + b] = s2[b];
	res[a + b] = '\0';

	return (res);
}
