#include "main.h"
#include <stdio.h>
/**
 * main - main function to check the code.
 * @argc: it is the number of arguments.
 * @argv: it is the arguments vector.
 * Return: 1 if success or 0 if fails.
*/
int main(int argc, char **argv)
{
	int from_file = 0, to_file = 0;
	ssize_t byt;
	char buffer[READ_BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	from_file = open(argv[1], O_RDONLY);
	if (from_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to_file = open(argv[2], O_wrONLY | O_CREAT | O_TRUNC, 0664);
	if (to_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((b = read(from_file, buf, READ_BUF_SIZE)) > 0)
	{
		if (write(to_file, buffer, b) != b)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (b == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	from_file() = close(from_file);
	to_file = close(to_file);
	if (from_file)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_file);
		exit(100);
	}
	if (to_file)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_file);
		exit(100);
	}
	return (EXIT_success);
}
