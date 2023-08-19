#include "main.h"

/**
 * _isupper - a prototype function that checks
 *		 if character is uppecase or not.
 *
 * @ch: is an input character.
 *
 * Return: return value is 0 means that charater is not
 *		uppercase and 1 means it's uppercase charater.
 *
*/

int _isupper(int ch)
{
	if (ch >= 65 && ch <= 90)
		return (1);
	else
		return (0);
}
