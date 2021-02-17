/**
 * _atoi - returns signed int from string
 * @s: string w/ int
 *
 * Return: int found in string
*/

#include <limits.h>

int _atoi(char *s)
{
	unsigned int i = 0, start, end;
	int started = 0, finished = 0, num = 0, nth = 1, sign = -1;

	while (finished == 0)
	{
		char c = *(s + i);

		if (c == '-')
			sign = sign == 1 ? -1 : 1;
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
		int d = *(s + i) - 48;

		if (sign == -1 && ((d - 48) * nth) > INT_MAX + num)
			return (-9);
		else if (sign == 1 && ((d * nth) * -1) < INT_MIN - num)
			return (-9);
		num -= (*(s + i) - 48) * nth;
		nth *= 10;
		if (i == 0)
			break;
	}

	return (num * sign);
}
