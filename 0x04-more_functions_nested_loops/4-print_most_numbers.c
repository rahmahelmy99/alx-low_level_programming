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

	while (n <= 9)
	{
		_putchar(n + 48);
		if (n == 2 || n == 4)
			n++;
		n++;
	}
	_putchar('\n');
}
