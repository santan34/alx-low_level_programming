#include "main.h"
/**
 * array_range - a function that creates an array of integers.
 * @min: the min number
 * @max: the max number
 * Return: a char star from min to max
 */
int *array_range(int min, int max)
{
	int size = 0;
	int *arr = NULL;
	int i  = 0;

	size = max - min;
	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * (size + 1));
	if (arr == NULL)
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
