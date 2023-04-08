#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of a program followed by a new line
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
