#include "main.h"
/**
 *void print_alphabet_x10 - prints out all the letters of the alphabet in small letters ten times
 *
 * Return: On success 0
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet_x10(void)
{
	int count = 0;
	while (count < 10)
	{
		int i;
       		for (i = 97; i <= 122; ++i)
        	{
                	_putchar(i);
        	}
	count++;
        _putchar('\n');
	}
	
}
