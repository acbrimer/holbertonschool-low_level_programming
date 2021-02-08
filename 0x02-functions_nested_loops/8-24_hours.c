#include "holberton.h"
/**
 * jack_bauer - prints every minute of day as hh:mm
 *
 * Return: void
*/
void jack_bauer(void)
{
	int hh;

	for (hh = 0; hh < 24; hh++)
	{
		int mm;

		for (mm = 0; mm < 60; mm++)
		{
			_putchar((hh / 10) + '0');
			_putchar((hh % 10) + '0');
			_putchar(':');
			_putchar((mm / 10) + '0');
			_putchar((mm % 10) + '0');
			_putchar('\n');
		}
	}
}
