#include "main.h"
/**
 * print_alphabet - prints out all the letters of the alphabet in small letters
 * Return: On success 0.
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; ++i)
   	{
		_putchar(i);
	}
	_putchar('\n');
}
