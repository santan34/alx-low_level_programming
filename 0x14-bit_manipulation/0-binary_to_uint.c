#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * binary_to_uint - changes from binary to int
 * @b: pointer to a string of bits
 * Return: the int in int
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	int sum = 0;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b == NULL)
		{
			return (0);
		}
		else if (b[i] == '1')
		{
			sum = sum + (1 << i);
		}
		else if (b[i] == '0')
		{
			sum = sum + (0 << i);
		}
		else
		{
			return (0);
		}
	}
	return (sum);
}
