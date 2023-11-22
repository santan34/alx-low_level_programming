#include <stdio.h>
#include <stdlib.h>
/**
 *str_concat - concatenated strings
 *@s1: string to be concatinated
 *@s2: string to be concatinated to
 *Return: a concatinated string
 */
char *str_concat(char *s1, char *s2)
{
	char *out;
	int count1 = 0;
	int count2 = 0;
	int size = 0;

	if (s1 == NULL && s2 == NULL)
	{
		s1[0] = '\0';
		s2[0] = '\0';
	}
	if (s1 == NULL)
	{
		s1[0] = '\0';
	}
	else if (s2 == NULL)
	{
		s2[0] = '\0';
	}
	while (s1[count1] != '\0')
	{
		count1 += 1;
	}
	while (s2[count2] != '\0')
	{
		count2 += 1;
	}
	size = count1 + count2 + 1;
	out = malloc(sizeof(char) * size);
	for (count1 = 0; s1[count1] != '\0'; count1++)
	{
		out[count1] = s1[count1];
	}
	for (count2 = 0; s2[count2] != '\0'; count2++)
	{
		out[count1 + count2] = s2[count2];
	}
	out[size - 1] = '\0';
	return (out);
}
