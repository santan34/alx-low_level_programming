#include "main.h"
/**
 * print_alphabet_x10 - prints out all the letters of the alphabe
 * Return: On success 0is returned, and errno is set appropriately.
 */
void print_alphabet_x10(void)
{
	int count = 0;
	int i = 97;

	while (count < 10)
	{
		for (i = 97; i <= 122; ++i)
		{
			_putchar(i);
		}
		count++;
		_putchar('\n');
	}
}
