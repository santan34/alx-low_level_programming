#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *_strdup - function to duplicate a string
 *@str: the string to be duplicated
 *Return: the address of the duplicate string
 */
char *_strdup(char *str)
{
	char *dup;
	int length = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}
	length += 1;
	dup = malloc(sizeof(char) * length);
	if (dup == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= length; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}
