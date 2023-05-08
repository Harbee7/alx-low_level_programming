#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buff(char *file);
void close_the_file(int a);

/**
 * create_buff - allocates 1024 bytes for a buff
 * @file: name of the file buffer
 *
 * Return: a pointer to the newly allocated buffer
 */

char *create_buff(char *file)
{
	char *b;

	b = malloc(sizeof(char) * 1024);

	if (b == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (b);
}

/**
 * close_the_file - closes file descriptor
 * @a: file descriptor to be closed
 */

void close_the_file(int a)
{
	int i;

	i = close(a);

	if (i == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close a %d\n", a);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *b;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,
				"Usage: cp file_from file_to\n");
		exit(97);
	}

	b = create_buff(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, b, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(b);
			exit(98);
		}

		w = write(to, b, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(b);
			exit(99);
		}

		r = read(from, b, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	free(b);
	close_the_file(from);
	close_the_file(to);

	return (0);
}
