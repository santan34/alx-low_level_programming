#include <stdlib.h>
#include "main.h"
/**
 * main - multiple two numbers
 * @argc: the number of arguments
 * @argv: the arguments themselves
 * Return: 1 on error 0 on succes
 */
int main(int argc, char **argv)
{
	long int ans = 0;
	int i = 0;
	char *str = NULL;
	int len = 0;
	int a1 = get_num(argv[1]);
	int a2 = get_num(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	ans = a1 * a2;
	len = find_len(ans);
	str = malloc(sizeof(char) * (len + 1));
	i = len;
	while (i > 0)
	{
		if (i == len)
		{
			str[i] = '\0';
		}
		else
		{
			str[i] = '0' + (ans % 10);
			ans /= 10;
		}
		i -= 1;
	}
	while (str)
	{
		_putchar(*str);
		str++;
	}
	return (0);
}
int find_len(int num)
{
	int i = 0;
	while (num != 0)
	{
		num = num / 10;
		i += 1;
	}
	return (i);
}
int get_num(char *string)
{
	char *str = NULL;
	int num;
	int new_num;
	int i = 0;

	str = malloc((strlen(string) + 1) * sizeof(char));
	while (string)
	{
		*str = *string;
		str++;
		string++;
	}
	*str = '\0';
	while (str[i] != '\0')
	{
		num = iffy(str[i]);
		new_num  = new_num * 10;
		new_num = new_num + num;
	}
	return (new_num);
}
int iffy(char s)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		if (s == '0' + i)
		{
			return (i);
		}
	}
	return (0);
}
