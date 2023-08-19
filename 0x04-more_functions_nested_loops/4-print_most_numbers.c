#include "main.h"

/**
 * print_most_numbers - protrtype function that
 *prints the numbers,from 0 to 9.
 *
 * Return: 0 means program success.
 *
*/

void print_most_numbers(void)
{
	int n = 0;

	for (; n <= 9; n++)
	{
		if (n == 2 || n == 4)
			continue;
		_putchar(n + 48);
	}
	_putchar('\n');
}
