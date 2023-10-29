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
	int z;

	z = *n | index;
	if (z >> index & 1)
		return (1);
	else
		return (-1);

}
