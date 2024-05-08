#include "search_algos.h"
/**
 * binary_search -  binary search algorithm
 * @array: the arrya to search
 * @size: the length of the array
 * @value: the value to search
 */

int binary_search(int *array, size_t size, int value)
{
	int lo = 0;
	int i;
	int hi = size - 1;
	int mid;

	if (!value || !array)
		return (-1);
	while(lo != hi)
	{
		mid = (lo + hi) / 2;
		printf("Searching in array: ");
		for (i = lo; i < hi; i++)
		{
			printf("%d", array[i]);
			if (i != (hi -1))
				printf(", ");
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			lo = mid + 1;
		else if (array[mid] > value)
			hi = mid - 1;
	}
	return (-1);
}
