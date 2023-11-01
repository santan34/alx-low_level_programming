#include <stdio.h>
#define UNUSED(x) (void)(x)
/**
 * main - returns the number of arguments passed to main
 * @argc: counts the number of arguments passed yto main
 * @argv: rrepresents the arguments
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	UNUSED(argv);
	printf("%d\n", argc - 1);
	return (0);
}
