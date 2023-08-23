#include "main.h"
#include <stdio.h>

/**
 * print_array - prototype function that prints n elements
 * of an array of integers.
 *
 * @a: input array.
 * @n: input number of elements of array.
 *
 * Return: 0 if success.
 *
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	_putchar('\n');
}
