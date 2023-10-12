#include "function_pointers.h"

/**
 * array_iterator - prototype function that executes a function
 * given as a parameter on each element of an array
 * @size: is the size of the array.
 * @action: is a pointer to the function you need to use.
 * @array: given array.
 * return: nothing.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		while (array < array + size)
		{
			action(*array);
			array++;
		}
	}
}
