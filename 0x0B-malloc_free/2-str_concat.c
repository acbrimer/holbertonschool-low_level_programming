#include <stdlib.h>

/**
 * str_concat - allocates new memory to concat strings
 * @s1: first string
 * @s2: second string
 *
 * Return: concat string
*/

char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, i;
	char *n;

	while (s1[a])
		a++;
	while (s2[b])
		b++;
	n = (char *)malloc(a + b);
	for (i = 0; i < a; i++)
		n[i] = s1[i];
	for (; i < a + b; i++)
		n[i] = s2[i - a];

	return (n);
}
