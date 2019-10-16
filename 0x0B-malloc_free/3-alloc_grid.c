#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - It allocates a 2D array of integers
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: Pointer to the new allocated space containing the array
 * or else, NULL if it fails
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **dest;

	if (width <= 0 || height <= 0)
		return (NULL);

			dest = malloc(sizeof(int *) * height);
	if (dest == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		dest[i] = malloc(sizeof(int) * width);
		if (dest[i] == NULL)
		{
			free(dest);
			for (j = 0; j <= i; j++)
				free(dest[j]);

			return (NULL);
		}
		for (j = 0; j < width; j++)
			dest[i][j] = 0;
	}
	return (dest);
}
