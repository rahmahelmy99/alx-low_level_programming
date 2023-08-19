#include "main.h"

/**
 *more_numbers - prototype function that
 * prints 10 times the numbers, from 0 to 14.
 *
 * Return: 0 means program success.
 *
*/

void more_numbers(void)
{
	int i = 0, k;

	while (i <= 9)
	{
		k = i;

		while (k <= 9)
		{
			_putchar(k + 48);
			if (k > 9)
			{
				_putchar(1 + 48);
				i = k % 10;
			}
			_putchar(i + 48);
		}
		_putchar('\n');
	}
}
