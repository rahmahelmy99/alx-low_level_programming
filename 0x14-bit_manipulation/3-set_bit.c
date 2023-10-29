#include "main.h"
/**
 * set_bit - prototype function that  sets the value of a bit
 * to 1 at a given index.
 * @n: a number.
 * @index: an index of bit at number.
 * Return: 1 if it worked, or -1 if an error occurred.
*/
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index >= sizeof(n) * 8)
		return (-1);

	if (!(*n |= 1L << index))
		return (0);
	else
		return (1);

}
