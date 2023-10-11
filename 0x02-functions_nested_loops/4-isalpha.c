#include "main.h"

/**
 * _isalpha(int c) - prints out if input is in upper or lower case
 *
 * Return: On success 1
 * On error, 0 is returned, and errno is set appropriately.
 */

int _isalpha(int c)
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
	for (i = 65; i <= 90; ++i)
        {
                if (c == i)
                {
                        d = 1;
                }
        }
        return (d);
}
