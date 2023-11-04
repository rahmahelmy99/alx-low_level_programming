#include "main.h"
/**
 * create_file - that creates a file.
 * @filename: filename.
 * @text_content: content of file.
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
*/
int create_file(const char *filename, char *text_content)
{
	int fdesc;
	ssize_t byt = 0;
	ssize_t len;

	for (len = 0; text_content[len] != 0; len++)
		;
	if (!filename)
		return (-1);
	fdesc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0200 | 0400);
	if (!filename)
		return (-1);
	if (len)
		byt = write(fdesc, text_content, len);
	close(fdesc);
	if (byt == len)
		return (1);
	else
		return (-1);
}
