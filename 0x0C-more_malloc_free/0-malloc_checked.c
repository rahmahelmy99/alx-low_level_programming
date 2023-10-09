#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked -  prototype function that allocates memory
 * using malloc.
 * @b: input unsighend number.
 * Return: a pointer to allocate memory.
*/
void *malloc_checked(unsigned int b)
{
	int *mloc;

	mloc = malloc(b);
	if (mloc == 0)
		exit(98);
	return (mloc);
}
