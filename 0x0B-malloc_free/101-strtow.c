#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h> 
/**
 * strtow -  my own strtok
 * @str: the string to be split
 * REturn: a char ** of the tokens
 */
char **strtow(char *str)
{
	int j = 0;
	int x = 0;
	int flag = 0;	
	int i = 0;
	int count = 0;
	int index = 0;
	char **p = NULL;
	int len = strlen(str);
	int lenth = 0;

	if (str == NULL || str = "")
	{
		return (NULL);
	}
	count = counter(str);
	if (count == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(char *) * (count + 1));
	for (i = 0; i <= len; i++)
	{
		lenth = 0;
		while (str[i] == ' ' && str[i] != '\0')
		{
			i += 1;
		}
		j = 0;
		while (str[j] != ' ' && str[j] != '\0')
		{
			lenth += 1;
			j += 1;
		}
		p[index] = malloc(sizeof(char) * (1 + lenth));
		x = 0;
		while (str[i] != ' ' && str[i] != '\0')
                {
			flag = 1;
			p[index][x] = str[i];
			i += 1;
			x += 1;
		}
		if (flag == 1)
		{
			p[index][x] = '\0';
			index += 1;
		}
		flag = 0;
	}
	if (index == count)
	{
		p[index] = NULL;
	}
	return(p);

}


int counter(char *str)
{
	int count = 0;
	int flag = 0;
	int i = 0;
	int len = strlen(str);

	for (i = 0; i <= len ; i++)
	{

		while(str[i] == ' ' && str[i] != '\0')
		{
			i += 1;
		}
		while (str[i] != ' ' && str[i] != '\0')
		{
			flag = 1;
			i += 1;
		}
		if (flag == 1)
		{
			count += 1;
		}
		flag = 0;

	}
	return (count);
}
