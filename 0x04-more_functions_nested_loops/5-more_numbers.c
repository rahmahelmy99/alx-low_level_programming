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
	int row = 0, num, count;

	while (row <= 9)
	{
		count = 0;
		while (count <= 14)
		{
			num = count;
			if (count < 9)
			{
				_putchar(1 + 48);
				num = count % 10;
			}
			_putchar(num + 48);
			count++;
		}
		row++;
		_putchar('\n');
	}
}
