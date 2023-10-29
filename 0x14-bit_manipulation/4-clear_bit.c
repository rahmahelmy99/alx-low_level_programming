#include "main.h"
/**
 * clear_bit - prototype function that sets the value of a bit
 * to 0 at a given index.
 * @n: a number.
 * @index: an index.
 * Return: 1 if it worked, or -1 if an error occurred.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
