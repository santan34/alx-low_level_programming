#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * alloc_grid - aloocates a grid memory
 * @width: the width of the grid f memory
 * @height: the height if the grid of memory to be allocated
 * Return: the memory adress of the grid
*/
int **alloc_grid(int width, int height)
{
	int i;
	int **p;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(int *) * height);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			return (NULL);
		}
	}
	return (p);
	free(p);
}
