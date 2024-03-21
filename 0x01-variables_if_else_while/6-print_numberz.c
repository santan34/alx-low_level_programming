#include <stdio.h>
/**
 * main - Prints all single digit numbers to 9
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num) + '0');
	putchar('\n');
	return (0);
}
