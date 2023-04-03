#include "main.h"
/**
 * _strchr - Entry point
 * @s: input value
 * @c: input value
 *
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int j = 0;

	for (; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	return (0);
}
