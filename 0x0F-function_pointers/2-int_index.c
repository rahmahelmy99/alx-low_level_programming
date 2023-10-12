#include "function_pointers.h"

/**
 * int_index - prototype function that searches for an integer.
 * @array: array of integer numbers.
 * @size: number of elements of array.
 * @cmp: a pointer to a function.
 * return: returns the index of the first element for which
 * the cmp function does not return 0.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size > 0 && cmp)
	{
		for (; i < size ; i++)
		{
			if (cmp(array[i]))
				return (i);
			else
				return (-1);
		}
	}
	return (-1);
}
