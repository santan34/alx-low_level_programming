#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: the number of argumnents
 * @argv: the arguments themselves
 * Return: 0 on success, 1 on Error
 */
int main(int argc, char **argv)
{
	int i, sum, x;

	x = 0;
	if ((argc - 1) == 0)
	{
		printf("0\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) != 0)
			{
				if (atoi(argv[i]) > 0)
				{
					sum += atoi(argv[i]);
				}
			}
			else
			{
				x = 1;
			}
		}
		if (x == 1)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			printf("%d\n", sum);
			return (0);
		}
	}
}
