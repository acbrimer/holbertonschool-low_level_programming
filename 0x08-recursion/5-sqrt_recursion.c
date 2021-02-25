/**
 * _sqrt - recursive function to get square root
 * @n: number to find square root of
 * @x: current number to test for square root of n
 *
 * Return: square root of n or -1
*/
int _sqrt(int n, int x)
{
	if (x * x == n)
		return (x);
	if (x * x > n)
		return (-1);
	return (_sqrt(n, x + 1));
}
/**
 * _sqrt_recursion - function to handle call to recursive _sqrt
 * @n: number to find square root of
 *
 * Return: int square root of x
*/
int _sqrt_recursion(int n)
{
	return (n < 0 ? -1 : _sqrt(n, 1));
}
