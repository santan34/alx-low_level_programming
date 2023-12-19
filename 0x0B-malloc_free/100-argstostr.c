#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - converts args to str
 * @ac: argc
 * @av: argv
 * Return: void
 */
char *argstostr(int ac, char **av)
{
	int len = 0;
	int i = 0;
	int j = 0;
	char *string;

	if ((av == NULL) || (ac == 0))
	{
		return (NULL);
	}
	while (av[i] != NULL)
	{
		len += strlen(av[i]);
		printf("%s\n", av[i]);
		i++;
	}
	len += (ac);
	string = malloc(sizeof(char) * len);
	while (av[j] == NULL)
	{
		if (j == 0)
		{
			strcpy(string, av[j]);
		}
		else
		{
			strcat(string, av[j]);
		}
		if (j < (ac - i))
		{
			strcat(string, "\n");
		}
		else if (j == (ac - 1))
		{
			strcat(string, "\0");
		}
	}
	return (string);
}
