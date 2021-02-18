/**
 * _atoi - returns signed int from string
 * @s: string w/ int
 *
 * Return: int found in string
*/
int _atoi(char *s)
{
	unsigned int i = 0, start, end, num = 0;
	int started = 0, finished = 0, nth = 1, sign = -1, d;
	char c;

	while (finished == 0)
	{
		c = *(s + i);
		if (c == '-')
			sign *= -1;
		if (c >= '0' && c <= '9' && started == 0)
		{
			start = i;
			started = 1;
		}
		if (c == '\0' || ((c < '0' || c > '9') && started == 1))
		{
			end = i - 1;
			finished = 1;
		}
		i++;
	}
	if (started == 0)
		return (0);
	for (i = end; i >= start; i--)
	{
		d = *(s + i) - 48;
		num += (*(s + i) - 48) * nth;
		nth *= 10;
		if (i == 0)
			break;
	}

	return (sign == -1 ? -num : num);
}
