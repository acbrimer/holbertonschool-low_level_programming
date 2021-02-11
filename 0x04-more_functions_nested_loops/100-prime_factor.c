#include <stdio.h>
#include <math.h>

/**
 * main - prints largest prime factor of 612852475143
 *
 * Return: always 0
*/
int main(void)
{
	long int m, i, n = 612852475143;

	/*divide n by 2 until n is odd */
	while (n % 2 == 0)
	{
		m = 2;
		n = n / 2;
	}
	/**
	 * i counts up odds from 3
	 * out of odd numbers to check when i = sqrt(n)
	 */
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		/*check n is evenly divisible by i */
		if (n % i == 0)
		{
			/*i must be prime b/c everything < i alread checked */
			m = i;
			n = n / i;
		}
	}
	/*remaining value of n is prime if not 1 or 2 */
	if (n > 2)
		m = n;
	printf("%ld\n", m);

	return (0);
}
