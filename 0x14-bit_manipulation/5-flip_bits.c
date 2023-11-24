#include "main.h"
/**
 * flip_bits - prototype function that returns the number of bits you
 * would need to flip to get from one number to another.
 * @n: a binary number.
 * @m: a binary number.
 * Return: number of bits.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	unsigned long int z;

	z = n ^ m;
	while (z)
	{
		if (z & 1ul)
			i++;
		z = z >> 1;
	}
	return (i);
}
