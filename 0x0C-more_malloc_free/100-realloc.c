#include "main.h"
#include <stdio.h>

/**
 * *_realloc - prototype function that reallocates a memory
 * block using malloc and free.
 * @ptr: pointer.
 * @old_size: is the size, in bytes, of the allocated space for ptr.
 * @new_size: is the new size, in bytes of the new memory block.
 * Return: nothing.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *point;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (0);
	}
	if (ptr == 0)
	{
		point = malloc(new_size);
		if (point == 0)
			return (0);
		return (point);
	}
	if (new_size > old_size)
	{
		point = malloc(new_size);
		if (point == 0)
			return (0);
		for (i = 0; i < old_size && i < new_size; i++)
		{
			*((char *)point + i) = *((char *)ptr + i);
		}
		free(ptr);
	}
	return (point);
}
