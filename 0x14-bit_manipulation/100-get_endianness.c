#include "main.h"

/**
 * get_endianness - prototype function that checks the endianness.
 * no arguments.
 * Return: if big endian return 0, and if little endian return 1.
*/
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;
	return ((int)*c);
}
