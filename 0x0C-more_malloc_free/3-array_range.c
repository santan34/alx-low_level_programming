#include "main.h"
/**
 * array_range - a function that creates an array of integers.
 * @min: the min number
 * @max: the max number
 */
int *array_range(int min, int max)
{
	int size = 0;
	int *arr = NULL;
	int i  = 0;

	size = max - min;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL || min > max)
	{
		return (NULL);
	}
	while (i < size)
	{
		arr[i] = min + i;
		i += 1;
	}
	return (arr);
}
