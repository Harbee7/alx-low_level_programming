#include "main.h"

/**
 * flip_bits - returns the num of bits you would need to
 * flip to get from one num to another
 * @n: first num to flip
 * @m: second num to flip
 *
 * Return: num of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, count = 0;
	unsigned long int harbee;
	unsigned long int jeg = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		harbee = jeg >> j;
		if (harbee & 1)
			count++;
	}

	return (count);
}
