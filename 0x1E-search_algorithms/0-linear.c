#include <stdio.h>
#include <stdlib.h>
/**
 * linear_search - linear search
 * @array: the array to search
 * @size: the size of the arrya to search
 * @value: the value to search
 * Return: the index of the value or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!value || !array)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			return (i);
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	return (-1);
}
