#include <stdio.h>
/**
 * main - Entry point
 * code to decide if a random number is even or odd
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		if (ch == 113)
			ch += 1;
		if (ch  == 101)
			ch += 1;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
