#include "variadic_functions.h"
void print_all(const char * const format, ...);
{
	va_list list;
	index = 0;
	func funcs[4] = {{'c', printc}; {'s', prints}
		{'f', printff}, {'i', printi}};

	va_start(list, format);
	while(format)
	{
		funcs[index].
	}
}

void printc(va_list, list)
{
	printf("%c",(char) va_arg(list, char));
}

void printi(va_list, list)
{
	printf("%d", va_arg(list, int));
}

void printff(va_list, list)
{
	printf("%f",(float) va_arg(list, double));
}

void prints(va_list, list)
{
	char *s = va_arg(list, char*);

	if (s)
	{
		printf("%s", s);
		return;
	}
	printf("(nil)");
}
