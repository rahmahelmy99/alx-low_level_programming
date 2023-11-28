#include "main.h"

/**
 * append_text_to_file - prototype function that appends text at
 * the end of a file
 * @filename: filename.
 * @text_content: content to be added.
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fdesc;
	ssize_t byt, len;

	if (!filename)
		return (-1);
	fdesc = open(filename, O_WRONLY | O_APPEND);
	if (fdesc == -1)
		return (-1);
	if (text_content)
	{
		for (byt = 0; text_content[byt]; byt++)
			;
		rwr = write(fdesc, text_content, byt);
		if (len == 0)
			return (-1);
	}
	close(fdesc);
	return (1);
}
