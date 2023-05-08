#include "main.h"

/**
  * read_textfile - ...
  * @filename: The source file
  * @letters: Number of letters to reads and prints
  *
  * Return: ...
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int o, r;
	char *buf;

	buf = malloc(sizeof(char *) * letters);

	if (!buf)
		return (0);

	if (!filename)
		return (0);

	o = open(filename, O_RDONLY, 0600);
	if (o == -1)
		return (0);

	r = read(o, buf, letters);
	write(STDOUT_FILENO, buf, r);

	free(buf);
	close(o);
	return (r);
}
