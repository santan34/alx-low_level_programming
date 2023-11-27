#include "main.h"
/**
 * get_endianness - checks if my machine is a big end or small end
 * Return: o if big and 1 if small
 */
int get_endianness(void)
{
	unsigned int n = 0x1122;
	char *c = (char *)&n;

	if (c[0] == 0x11)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
