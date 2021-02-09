/**
 * _abs - get absolute value
 * @n: Number to get abs value of
 *
 * Return: int
*/
int _abs(int n)
{
	int i;

	i = n < 0 ? (n * -1) : n;

	return (i);
}
