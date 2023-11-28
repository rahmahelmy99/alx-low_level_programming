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
 * create_file - prototype function that creates a file.
 * @filename: filename.
 * @text_content: NULL terminated string to add at the end of the file
 * content of file.
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
*/
int create_file(const char *filename, char *text_content)
{
	int fdesc;
	ssize_t byt = 0;
	ssize_t len = _strlen(text_content);

	if (!filename || !text_content)
		return (-1);
	fdesc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fdesc == -1)
		return (-1);
	if (len)
		byt = write(fdesc, text_content, len);
	close(fdesc);

	return (byt == len ? 1 : -1);
}
