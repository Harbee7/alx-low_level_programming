#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: input value one to concat
 * @s2: input value two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *conc;
	int m, at;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	m = at = 0;
	while (s1[m] != '\0')
		m++;
	while (s2[at] != '\0')
		at++;
	conc = malloc(sizeof(char) * (m + at + 1));

	if (conc == NULL)
		return (NULL);
	m = at = 0;
	while (s1[m] != '\0')
	{
		conc[m] = s1[m];
		m++;
	}

	while (s2[at] != '\0')
	{
		conc[m] = s2[at];
		m++, at++;
	}
	conc[m] = '\0';
	return (conc);
}
