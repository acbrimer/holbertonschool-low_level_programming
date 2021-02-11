#include "holberton.h"
/**
 * more_numbers - prints 0-14
 *
 * Return: void
*/
void more_numbers(void)
{
	int i, n;

	for (i = 0; i < 10; i++)
		for (n = 0; n <= 15; n++)
		{
			if (n > 9)
			{
				if (n == 15)
				{
					_putchar('\n');
					break;
				}
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else
				_putchar(n + '0');
		}
}
