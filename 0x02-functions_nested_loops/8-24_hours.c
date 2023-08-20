#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prototype function that prints every
 * minute of the day of Jack Bauer.
 *
 * Return: 0 if success.
 *
*/

void jack_bauer(void)
{
	int h = 0;
	int m;

	while (h < 23)
	{
		m = 0;
		while (m <= 95)
		{
			_putchar((h / 10) + 48);
			_putchar((h % 10) + 48);
			_putchar(58);
			_putchar((m / 10) + 48);
			_putchar((m % 10) + 48);
			_putchar('\n');
			m++;
		}
		h++;
	}
}
