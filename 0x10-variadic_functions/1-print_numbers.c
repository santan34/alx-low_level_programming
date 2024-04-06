#include "variadic_functions.h"

/**
  * print_numbers - prints all the numbers
  * @separator: the separator
  * @n: the number of args
  *
  * Return: nothing
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i = 0;

	va_start(ptr, n);
	while (i < n)
	{
		printf("%d", va_arg(ptr, int));
		if (i < n - 1)
		{
			if (separator)
				printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(ptr);
}
