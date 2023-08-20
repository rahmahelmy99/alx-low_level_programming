#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prototype function that prints
 * the n times table, starting with 0.
 * @n: input number.
 *
 * Return: 0 if success.
 *
*/

void print_times_table(int n)
{
	int i, j, mul;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				mul = i * j;
				if (mul <= 9)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (mul <= 99)
				{
					_putchar(' ');
					_putchar((mul / 10) + 48);
				}
				else
				{
					_putchar((mul / 100) + 48);
					_putchar((mul / 10) % 10 + 48); /*to get the middle number only*/
				}
				_putchar((mul % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
