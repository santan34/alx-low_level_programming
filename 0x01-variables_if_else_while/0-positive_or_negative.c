#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * code to decide if a random number is even or odd
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	int  RAND_MAX = 4;
	n = rand() - RAND_MAX / 2;
	
	if (n>0)
	{
		printf("%i is positive\n", n);
	}else
	{
		printf("%i is negative\n", n);
	}
	return (0);
}
