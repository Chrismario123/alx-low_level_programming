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
	int **jk;
	int o;
	int d;

	if (width <= 0 || height <= 0)
		return (NULL);
	jk = malloc(sizeof(int *) * height);
	if (jk == NULL)
		return (NULL);
	for (o = 0; o < height; o++)
	{	
		jk[o] = malloc(sizeof(int) * width);
	if (jk[o] == NULL)
	{	
		free(jk);
	for (d = 0; d <= height; d++)
		free(jk[d]);
	return (NULL);
	}
	for (d = 0; d < width; d++)
		jk[o][d] = 0;
	}
	return (jk);
}
