/**
 * is_divisible - recursive check if n % x = 0
 * @n: number to check
 * @x: number to test
 *
 * Return: 1 if prime, 0 if not prime
*/
int is_divisible(int n, int x)
{
	if (n % x == 0)
		return (0);
	if (x > (n / 2))
		return (1);
	return (is_divisible(n, x + 1));
}

/**
 * is_prime_number - checks if number is prime
 * @n: number to check
 *
 * Return: 1 for prime, 0 for non-prime/negative
*/
int is_prime_number(int n)
{
	return (n < 0 || n == 1 ? 0 : is_divisible(n, 2));
}
