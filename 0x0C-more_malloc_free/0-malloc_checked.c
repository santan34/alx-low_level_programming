#include "main.h"
/**
 * malloc_checked - function to allocate memory plus null check
 * @b: the number of bytes to allocate
 * Return: void pinter
 */
void *malloc_checked(unsigned int b)
{
	char *ret = NULL;

	ret = malloc(b);
	if (ret == NULL)
	{
		exit(98);
	}
	return (ret);
}
