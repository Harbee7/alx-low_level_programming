#include "main.h"

/**
 * print_binary - prints the binary representation of a
 * num
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	int j, count = 0;
	unsigned long int harbee;

	for (j = 63; j >= 0; j--)
	{
		harbee = n >> j;

		if (harbee & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
