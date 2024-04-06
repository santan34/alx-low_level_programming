#include "variadic_functions.h"

/**
  * sum_them_all - sums all arguments
  * @n: number of arguments
  * Return: the sum odf the stuff
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	int sum = 0;
	unsigned int i = 0;

	if (n <= 0)
		return (0);

	va_start(ptr, n);

	while (i < n)
	{
		sum += va_arg(ptr, int);
		i++;
	}
	va_end(ptr);
	return (sum);

}
