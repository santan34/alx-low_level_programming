#include <stdio.h>
/** 
 * * main - Entry point 
 * 
 *code toprint more
 * 
 * Return: Always 0 (Success)
 * 
 */
int main()
{
	 int i;
        for (i = 123; i< 65; i--)
        {	
		while ((i < 97)&& (i > 90))	
		putchar(i);
        
	}
	putchar('\n');
	return (0);
}
