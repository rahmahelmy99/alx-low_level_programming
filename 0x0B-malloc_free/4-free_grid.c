#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - prototype function that frees 2d grid previously
 * created by alloc_grid function.
 * @grid: duble pointer to 2d grid.
 * @height: input height.
 * Return: 0 if success.
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
