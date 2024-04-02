#include "main.h"
/**
 * _islower - prints out if input is in upper or lower case
 * @c: thne number
 * Return: On success 1
 */
int _islower(int c)
{
	int i;
	int d = 0;

	for (i = 97; i <= 122; ++i)
	{
		if (c == i)
		{
			d = 1;
		}
	}
	return (d);
}
