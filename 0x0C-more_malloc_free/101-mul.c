#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - multiples two numbers
 * @argc: - the number of arguents taken in
 * @argv: - the array of the arguments
 * Return: 0 on success
 */
int check_one(int argc, char **argv);
int convert(char *argv);
int len_num(unsigned long num);

int main(int argc, char **argv)
{
	unsigned long i = 0;
	unsigned long j = 0;
	unsigned long product = 0;
	unsigned long copy = 0;
	unsigned long len = 0;
	char *str_1;
	char *str_2;
	unsigned long f = 0;

	check_one(argc, argv);
	i = convert(argv[1]);
	j = convert(argv[2]);
	product = i * j;
	product = product * 1;
	copy = product;
	len = len_num(product);
	str_1 = malloc(sizeof(char) * (len + 1));
	str_2 = malloc(sizeof(char) * (len + 1));
	while (f < len)
	{
		str_1[f] = '0' + (copy % 10);
		copy /= 10;
		f += 1;
	}
	str_1[f] = '\0';
	f = 0;
	while (str_1[f] != 0)
	{
		str_2[f] = str_1[len - 1 - f];
		f += 1;
	}
	str_2[f] = '\0';
	f = 0;
	while (str_2[f] != '\0')
	{
		_putchar(str_2[f]);
		f += 1;
	}
	_putchar('\n');
	free(str_1);
	free(str_2);
	return (0);
}
/**
 * len_num - finds the strlen of an int
 * @num: the num to find the length
 * Return: the strlen
 */
int len_num(unsigned long num)
{
	int count = 0;

	while (num > 0)
	{
		count += 1;
		num /= 10;
	}
	return (count);
}
/**
 * convert - conver a str to int
 * @argv: the char * to convert
 * Return: the int of the string
 */
int convert(char *argv)
{
	int x = 0;
	int y = 0;
	int num_1 = 0;

	while (argv[y] != '\0')
	{
		x = 0;
		while (x < 10)
		{
			if (argv[y] == '0' + x)
			{
				break;
			}
			x += 1;
		}
		num_1 = num_1 * 10;
		num_1 += x;
		y += 1;
	}
	return (num_1);
}
/**
 * check_one - check if the char *'s contain integers only
 * @argc: contains the number of arguments
 * @argv: the arguments themselves
 * Return: 0 on success
 */
int check_one(int argc, char **argv)
{
	int i = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	while (argv[1][i] != '\0')
	{
		if ((argv[1][i] < '0') || (argv[1][i] > '9'))
		{
			printf("Error\n");
			exit(98);
		}
		i += 1;
	}
	i = 0;
	while (argv[2][i] != '\0')
	{
		if ((argv[2][i] < '0') || (argv[2][i] > '9'))
		{
			printf("Error\n");
			exit(98);
		}
		i += 1;
	}
	return (0);
}
