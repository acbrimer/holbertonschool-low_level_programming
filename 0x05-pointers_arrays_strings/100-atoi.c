/**
 * _atoi - returns signed int from string
 * @s: string w/ int
 *
 * Return: int found in string
*/

int _atoi(char *s)
{
	unsigned int i = 0, start, end;
	int started = 0, finished = 0, num = 0, nth = 1, sign = 1;
	/*get start and end pos of first num in str */
	while (finished == 0)
	{
		char c = *(s + i);
		/*switch sign for negatives */
		if (c == '-')
			sign = sign == -1 ? 1 : -1;
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
	/*build number from 1's place by num chars in reverse */
	for (i = end;
		(i >= start); i--)
	{
		/*convert char digit to int, add *10^nth to num */
		num += (*(s + i) - 48) * nth;
		nth *= 10;
		if (i == 0)
			break;
	}

	return (num * sign);
}
