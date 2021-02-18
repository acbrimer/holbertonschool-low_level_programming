/**
 * leet - replaces a,e,o,t,l w/ 4,3,0,7,1
 * @s: string to replace chars
 *
 * Return: pointer to input string
*/

char *leet(char *s)
{
	char a[127];
	int i, c;

	for (i = 0; i <= 127; i++)
		a[i] = '.';
	a[65] = '4';
	a[97] = '4';
	a[69] = '3';
	a[101] = '3';
	a[79] = '0';
	a[111] = '0';
	a[84] = '7';
	a[116] = '7';
	a[76] = '1';
	a[108] = '1';
	i = 0;
	while (*(s + i))
	{
		c = *(s + i);
		if (a[c] != '.')
			*(s + i) = a[c];
		i++;
	}

	return (s);
}
