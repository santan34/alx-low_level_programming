#include "main.h"
/**
 * string_nconcat - concatinates two strings up to some int
 * @s1: string1 to copy
 * @s2: string 2 to cat to s1 up to n
 * @n: the strings to copy up tp
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int n1;
	unsigned int n2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	n1 = strlen(s1);
	n2 = strlen(s2);
	if (n > n2)
	{
		n = n2;
	}
	str = malloc(sizeof(char) * (n1 + n + 1));
	while(s1[i] != '\0')
	{
		str[i] = s1[i];
		i += 1;
	}
	for (j = 0; j < n; j++)
	{
		str[i + j] = s2[j];
	}
	str[i + j] = '\0';
	return (str);
}
