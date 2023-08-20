#include "main.h"
#include <stdio.h>

/**
 * times_table - prototype function that prints
 * the 9 times table, starting with 0.
 *
 * Return: 0 if success.
 *
*/

void times_table(void)
{
	int mul;

	for (int i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (int j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			mul = i * j;
			/*check if there the mul two digit or not*/
			if (mul <= 9)
				_putchar(' ');
			else
				_putchar((mul / 10) + 48);
			_putchar((mul % 10) + 48);
		}
		_putchar('\n');
	}
}
