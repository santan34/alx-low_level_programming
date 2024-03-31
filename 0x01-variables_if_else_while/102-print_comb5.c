#include <stdio.h>
/**
 * main - the entry point
 * Return: 1 on success
 */
int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				for (l = 1; l <= 9; l++)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + k);
					putchar('0' + l);
					if ((i != 9) || (j != 8) || (k != 9) || (l != 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
