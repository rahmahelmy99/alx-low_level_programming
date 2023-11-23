#include "main.h"
/**
* binary_to_uint - prototype function that converts a binary
 * number to an unsigned int
 * @b: pointer to a sting of 0 and 1 char.
 * Return: the converted number.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int n;

	if (b == 0)
		return (0);
	while (*b)
	{
		if (*b != 0 && *b != 1)
			return  (0);
		n = n * 2 + (*b - '0');
		*b--;
		return (n);  
	}

}
