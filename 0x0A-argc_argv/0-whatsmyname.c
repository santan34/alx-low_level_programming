#include <stdio.h>
/**
 * main - prints out the name of the program
 * @argv: list of vairable parameters to the main
 * @argc: is the number of paramters passted to main
 * Return: 0 for succes
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
