#include "main.h"
#include <stdio.h>

/**
 * *array_renge - prototype function that creates an array
 * of integers.
 * @min: input number.
 * @max: input number.
 * Return: the pointer to the newly created array.
*/
int *array_range(int min, int max)
{
	int *mloc;
	int i;

	if (min > max)
		return (0);
	mloc = malloc(sizeof(int) * (max - min + 1));
	if (mloc == 0)
		return (0);
	for (i = 0; i < (max - min + 1); i++)
		mloc[i] = min + 1;
	return (mloc);
}
