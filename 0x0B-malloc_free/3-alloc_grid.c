#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - prototype function that returns a pointer to a
 * 2 dimensional array of integers.
 *
 * @width: input number.
 * @height: input number.
 *
 * Return: return the array if succes or if failure or If
 * width or height is 0 or negative.
 *
*/

int **alloc_grid(int width, int height)
{
	int **arr, i, j;
	arr = malloc(sizeof(*arr) * height);

	if (height <= 0 || width <= 0 || arr == 0)
		return (0);
	else
	{
		for (i = 0; i < height; i++)
		{
			arr = malloc(sizeof(**arr) * width);
			if (arr[i] == 0)
			{
				while (i--)
					free(arr[i]);
				free(arr);
				return (0);
			}
			else
			{
				for (j = 0; j < width; j++)
				{
					arr[i][j] = 0;
				}
			}
		}
	}
	return (arr);
}
