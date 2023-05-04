#include "main.h"

/**
 * get_endianness - checks for  the endianness of a machine
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *s = (char *) &i;

	return (*s);
}
