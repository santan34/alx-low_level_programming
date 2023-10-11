#include "main.h"
/**
 *
 * main - Entry point
 *
 * print_alphabet - prints out all the letters of the alphabet in small letters
 *
 * Return: On success 0
 * On error, -1 is returned, and errno is set appropriately.
 */

int main()
{
        alpha();
        return (0);
}
void print_alphabet(void)
{
    	int i;
    	for (i=97;i<=122;++i)
   	{	
        	_putchar(i);
    	}
    	_putchar('\n');
}
