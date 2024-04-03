#include "main.h"
#include <stdio.h>
void print(int n);
/**
 * print_number - Function that prints an integer.
 * @n: int type numbe
 */
void print_number(int n)
{
	if (n == 0)
		_putchar('0');
	else if (n > 0)
		print(n);
	else if (n < 0)
	{
		_putchar('-');
		print(n * -1);
	}
}
/**
 * print - the actual printer
 * @n:  the number to print
 */
void print(int n)
{
	int c = 0;
	int len = 0;
	int c1 = 1;

	c = n;
	while (n / 10  > 0)
	{
		len += 1;
		n /= 10;
	}
	len += 1;

	while (len > 1)
	{
		c1 *= 10;
		len -= 1;
	}
	while (c > 0)
	{
		_putchar((c / c1) + '0');
		c = c % c1;
		c1 /= 10;
	}
}
