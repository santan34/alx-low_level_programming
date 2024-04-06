#include "3-calc.h"
/**
 * main - main function
 * @argc: argument count
 * @argv: string of arguments in array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = get_op_func(argv[2]);
	if (!op)
	{
		 printf("Error\n");
		 exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	c = op(a, b);
	printf("%d\n", c);
	return (0);
}
