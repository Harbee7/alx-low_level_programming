#include "main.h"

/**
 *  binary_to_uint - converts binary num to an unsigned
 *  int
 *  @b: string containing the binary num
 *
 *  Return: the converted num
 */

unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int num = 0;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		num = 2 * num + (b[j] - '0');
	}

	return (num);
}
