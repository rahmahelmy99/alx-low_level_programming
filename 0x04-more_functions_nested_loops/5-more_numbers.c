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
	int row = 0, num;

	while (row <= 9)
	{
		num = 0i;

		while (num <= 9)
		{
			_putchar(num + 48);
			num++;
		}
		while (num < 5)
		{
			_putchar(1 + 48);
			_putchar((num % 10) + 48);
			num++;
		}
		row++;
		_putchar('\n');
	}
}
