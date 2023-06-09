#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: NULL
 */

int **alloc_grid(int width, int height)
{
	int **bee;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	bee = malloc(sizeof(int *) * height);

	if (bee == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		bee[a] = malloc(sizeof(int) * width);

		if (bee[a] == NULL)
		{
			for (; a >= 0; a--)
				free(bee[a]);

			free(bee);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			bee[a][b] = 0;
	}

	return (bee);
}
