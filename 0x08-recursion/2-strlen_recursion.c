#include "main.h"
/**
 * _strlen_recursion - Returns the lenght of a string
 * @s: string to be measured
 * Return: Length of a string
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
