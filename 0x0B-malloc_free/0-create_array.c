#include "main.h"
#include <stdio.h>

/**
 * create_array - prototype function that creates an array of
 * chars, and initializes it with a specific char.
 *
 * @size: input number.
 * @c: input character.
 *
 * Return: null if size equal 0 or return a pointer to array.
 *
*/
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size);

	if (size == 0 || arr == 0)
		return (0); /*null character*/
	else
	{
		while (size--)
			n[size] = c;
	}
	return(n);

}
