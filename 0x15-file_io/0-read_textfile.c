#include "main.h"

/**
 * read_textfile - prototype function that reads a text file and prints it
 * to the POSIX standard output.
 * @filename: filename of the file.
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print.
 *
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdesc;
	ssize_t byt;
	char buf[1024 * 8];

	if (!filename || !letters)
		return (0);
	fdesc = open(filename, O_RDONLY);
	if (fdesc == -1)
		return (0);
	byt = read(fdesc, &buf[0], letters);
	byt = write(STDOUT_FILENO, &buf[0], byt);
	close(fdesc);
	return (byt);
}
