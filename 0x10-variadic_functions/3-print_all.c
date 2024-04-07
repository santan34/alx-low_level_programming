#include "variadic_functions.h"
void printc(va_list list);
void printff(va_list list);
void prints(va_list list);
void printi(va_list list);
/**
 * print_all - prints various types given a format string for the arguments
 *
 * @format: string containing type information for args
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int comma = 0;
	int index = 0;
	const char *ptr = format;
	func funcs[4] = {{'c', printc}, {'s', prints},
		{'f', printff}, {'i', printi}};

	va_start(list, format);
	while (format && *ptr)
	{
		if (funcs[index].key == *ptr)
		{
			if (comma != 0)
			{
				printf(", ");
			}
			funcs[index].f(list);
			comma += 1;
			ptr++;
			index = -1;
		}
		index++;
		ptr += index / 4;
		index %= 4;
	}
	printf("\n");
	va_end(list);
}
/**
 * printc - printfs a char from var args
 *
 * @list: va_list to print from
 *
 * Return: void
 */
void printc(va_list list)
{
	printf("%c", (char) va_arg(list, int));
}
/**
 * printi - printfs a int from var args
 *
 * @list: va_list to print from
 *
 * Return: void
 */
void printi(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * printff - printfs a float from var args
 *
 * @list: va_list to print from
 *
 * Return: void
 */
void printff(va_list list)
{
	printf("%f", (float) va_arg(list, double));
}
/**
 * prints - printfs astring form var args
 *
 * @list: va_list to print from
 *
 * Return: void
 */
void prints(va_list list)
{
	char *s = va_arg(list, char*);

	if (s)
	{
		printf("%s", s);
		return;
	}
	printf("(nil)");
}
