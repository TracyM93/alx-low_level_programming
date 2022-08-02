#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function to return a pointer of a 2d array
 *
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: NULL for failure or 0/ neg height/ width
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width < 1)
		return (NULL);
	if (height < 1)
		return (NULL);
	arr = malloc(height * sizeof(int *));
	if (arr == 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == 0)
		{
			for (j = 0; j < i; j++)
				free(arr[j]);
			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
