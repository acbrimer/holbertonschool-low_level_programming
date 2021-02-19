/**
 * infinite_add - adds the digits of two positive num strings
 * @n1: first number
 * @n2: second number
 * @r: buffer pointer for result
 * @size_r: max size for return buffer
 *
 * Return: char * pointer to sum of n1 + n2
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int c = 0, i, f, b, d1, d2, d, l1 = 0, l2 = 0, m;
	char t, *o = '\0';

	while (*(n1 + l1))
		l1++;
	while (*(n2 + l2))
		l2++;
	m = l1 >= l2 ? l1 : l2;
	for (i = 0; i < m; i++)
	{
		if ((i + 2) >= size_r)
		{
			r = o;
			return (o);
		}
		d1 = i + 1 > l1 ? 0 : n1[l1 - (i + 1)] - 48;
		d2 = i + 1 > l2 ? 0 : n2[l2 - (i + 1)] - 48;
		d = d1 + d2 + c;
		*(r + i) = (d % 10) + '0';
		c = d / 10;
	}
	if (c != 0)
		*(r + (i++)) = c + '0';
	for (f = 0, b = i - 1; f < i / 2; f++, b--)
	{
		t = *(r + b);
		*(r + b) = *(r + f);
		*(r + f) = t;
	}
	*(r + i) = '\0';

	return (r);
}
