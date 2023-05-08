#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a txt file and prints it to the
 * POSIX std output
 * @filename: txt file being read
 * @letters: num of letters to be read
 *
 * Return: 0, NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *a;
	ssize_t b;
	ssize_t c;
	ssize_t d;

	b = open(filename, O_RDONLY);
	if (b == -1)
		return (0);
	a = malloc(sizeof(char) * letters);
	d = read(b, a, letters);
	c = write(STDOUT_FILENO, a, d);

	free(a);
	close(b);
	return (c);
}
