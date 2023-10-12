#include "function_pointers.h"
/**
 * int_index - a prototype function that searches for an integer in an array.
 *
 * @array: array of integer numbers.
 * @size: number of elements of array.
 * @cmp: a pointer to a function.
 * Return: returns the index of the first element for
 * which the cmp function does not return 0.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		for (i = 0; i < size ; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
