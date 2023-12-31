#include "main.h"
/**
 * _realloc - reallocates memory previous assigned memory
 * @ptr: the memory to reallocate
 * @old_siz: the old size of the memory
 * @new_size: the new size of the memory
 * Return: the reallocated pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char * temp = NULL;
	unsigned int i = 0;
	unsigned int len = 0;
	char *str = (char *)ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}	
	if (new_size > old_size)
	{
		temp = malloc(old_size);
		len = strlen(str);
		while (i <= len)
		{
			temp[i] = str[i];
			i += 1;
		}
		free(ptr);
		ptr = malloc(new_size);
		strcpy((char *)ptr, temp);
		free(temp);
	}
	return (ptr);
}
