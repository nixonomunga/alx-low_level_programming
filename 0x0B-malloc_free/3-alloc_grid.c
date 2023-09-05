#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to a 2-dimensional array of integers
 *
 * @width: row
 * @height: col
 *
 * Return: 2-dimensional array, Null if width || height is 0
 */

int **alloc_grid(int width, int height)
{
	int **table;
	int i, j;

	if (width + height < 2 || width < 1 || height < 1)
	{
		return (NULL);
	}

	table = malloc(height * sizeof(*table));
	if (table == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		table[i] = malloc(width * sizeof(**table));
		if (table[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(table[i]);
			}
			free(table);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			table[i][j] = 0;
		}
	}
	return (table);
}
