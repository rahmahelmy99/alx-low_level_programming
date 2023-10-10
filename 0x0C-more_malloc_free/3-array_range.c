#include "main.h"
#include <stdio.h>

/**
 * array_range - prototype function that creates
 * an array of integers.
 * @min: input number.
 * @max: input number.
 * Return: the pointer to the newly created array.
*/
int *array_range(int min, int max)
{
	int *mloc;
	int i, len;

	if (min > max)
		return (0);
	len = max - min + 1;
	mloc = malloc(sizeof(int) * len);
	if (mloc == 0)
		return (0);
	for (i = 0; i < len; i++)
	{
		mloc[i] = min;
		min++;
	}
	return (mloc);
}
