#include "lists.h"
/**
 *  print_list - unction that prints all the elements of a list_t list.
 *  @h: a point er to a structure
 *  Return: the number of nodes
 */
size_t count = 0;

size_t print_list(const list_t *h)
{
	if (h == NULL)
	{
		return (count);
	}
	else
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		count += 1;
		print_list(h->next);
	}
	return (1);
}
