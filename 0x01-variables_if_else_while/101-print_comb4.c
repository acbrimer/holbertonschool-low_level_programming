#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 0;
	while (n <= 789)
	{
		int f, m, l, mlf, mfl, flm, lfm, lmf;

		f = n > 99 ? n / 100 : 0;
		m = n > 99 ? (n % 100) / 10 : n / 10;
		l = n > 99 ? (n % 100) % 10 : n % 10;
		/*get 5 possible digit permutations of n */
		mlf = (m * 100) + (l * 10) + f;
		mfl = (m * 100) + (f * 10) + l;
		flm = (f * 100) + (l * 10) + m;
		lfm = (l * 100) + (f * 10) + m;
		lmf = (l * 100) + (m * 10) + f;
		if ((n <= mlf) && (n <= mfl) && (n <= flm) && (n <= lfm) && (n <= lmf))
		{
			putchar(f + '0');
			putchar(m + '0');
			putchar(l + '0');
			if (n < 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
		n++;
	}
	putchar('\n');

	return (0);
}
