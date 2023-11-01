#include <stdio.h>
/**
 * main - prints out the names of all arguments
 * @argc: counts the number of arguments
 * @argv: are the arguments to main
 * Return: 0 if success
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
