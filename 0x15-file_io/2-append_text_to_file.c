#include "main.h"
/**
 * _strlen - prototype function that returns
 * the length of a string.
 * @s: input that pointer will take to point.
 * Return: 0 if success.
*/
int _strlen(char *s)
{
	int count;

	if (!s)
		return (0);
	for (count = 0; *s != '\0'; s++)
		count++;
	return (count);
}

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
	ssize_t byt = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fdesc = open(filename, O_WRONLY | O_APPEND);
	if (fdesc == -1)
		return (-1);
	if (len)
		byt = write(fdesc, text_content, len);
	close(fdesc);
	return (byt == len ? 1 : -1);
}
