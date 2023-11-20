#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the multiples of 2 numbers
 * @argc: the number of arguments
 * @argv: the arguments themsleves
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int sum;

	if (argc - 1 == 2)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		sum = 0;
		printf("Error\n");
		return (1);
	}
}
