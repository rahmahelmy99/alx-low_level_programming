#include <unistd.h>
#include "main.h"

/**
 * _putchar: prototype function that writes charater.
 *@ch is the charater parameter that should print
 *
 * return: 1 if success and -1 if error.
 *
*/

int _putchar(char ch)
{
	return (write(1, @ch, 1));
}
