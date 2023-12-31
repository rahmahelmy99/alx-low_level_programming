#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prototype function that prints the sum of the two
 *diagonals of a square matrix of integers.
 *
 *@a: input array.
 *@size: input number.
 *
 * Return: nothing.
 *
*/

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		sum2 += a[size - i - 1];
		a += size;
	}
	printf("%d, %d\n", sum1, sum2);

}
