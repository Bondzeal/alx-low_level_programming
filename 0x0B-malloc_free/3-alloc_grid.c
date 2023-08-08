#include "main.h"
#include <stddef.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensionsal array of integers
 * @width: row
 * @height: column
 *
 * Return: NULL if @width or @height is 0 or -, otherwise
 * return NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **dimarr;
	int i, j;

	if (width <= 0)
		return (NULL);

	if (height <= 0)
		return (NULL);

	dimarr = malloc(sizeof(int *) * height);

	if (dimarr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		dimarr[i] = malloc(sizeof(int) * width);
		if (dimarr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(dimarr[i]);

			free(dimarr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			dimarr[i][j] = 0;
	}

	return (dimarr);
}
