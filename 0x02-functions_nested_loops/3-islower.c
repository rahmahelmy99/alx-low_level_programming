#include "main.h"
#include <stdio.h>

/**
 *_islower - prototype function that checks
 * for lowercase character.
 *
 * @c: input number.
 *
 * Return: 1 if c is lowercase and 0 otherwise.
 *
*/

int _islower(int c)
{
	if (c >= 97 && c >= 122)
		return (1);
	else
		return (0);

}
