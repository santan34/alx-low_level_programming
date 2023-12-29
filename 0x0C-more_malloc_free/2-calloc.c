#include "main.h"
/**
 * _calloc - a fucntion to allocate memory using mallloc
 * @nmemb: the number of members
 * @size: the size of the members
 * Return: a casted char * of the allocated memodry
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;

	if (nmemb ==0 || size == 0)
	{
		return (NULL);
	}
	str = malloc(nmemb * size);
	if (str == NULL)
	{
		return (NULL);
	}
	return (str);
}
