#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * binary_to_uint - changes from binary to int
 * @b: pointer to a string of bits
 * Return: the int in int
 */
unsigned int binary_to_uint(const char *b)
{	unsigned int x = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b == '1')
			x = (x << 1) | 1;
		else if (*b == '0')
			x <<= 1;
		else
			return (0);
		b++;
	}
	return (x);
}
