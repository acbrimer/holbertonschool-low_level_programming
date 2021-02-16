/**
 * rev_string - reverses string at input address
 * @s: pointer to first char of string
 *
 * Return: void
*/

void rev_string(char *s)
{
	int l = 0, c;
	char *f, *r, temp;

	while (*(s + l) != '\0')
		l++;
	f = s;
	r = s;
	for (c = 0; c < l - 1; c++)
		r++;
	for (c = 0; c < l / 2; c++)
	{
		temp = *r;
		*r = *f;
		*f = temp;
		f++;
		r--;
	}
}
