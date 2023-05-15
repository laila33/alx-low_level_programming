#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **e;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	e = malloc(sizeof(int *) * height);

	if (e == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		e[i] = malloc(sizeof(int) * width);

		if (e[i] == NULL)
		{
			for (; i >= 0; i--)
				free(e[i]);

			free(e);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			e[i][j] = 0;
	}

	return (e);
}
