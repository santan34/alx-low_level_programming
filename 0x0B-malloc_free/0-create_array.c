#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates array
 * @size: size of array to create
 * @c: char to initialize with?
 * Return: char value
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size != 0)
	{
		arr = malloc(sizeof(c) * size);
		if (arr != NULL)
		{
			while (i < size)
			{
				arr[i] = c;
				i++;
			}
			return (arr);
		}
		else
		{
			return (NULL);
		}
	}
	else
	{
		return (NULL);
	}
	free(arr);
}

