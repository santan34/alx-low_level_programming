#include "lists.h"
/**
 *  print_list - unction that prints all the elements of a list_t list.
 *  @h: a point er to a structure
 *  Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	if (h == NUL)
		return (0);
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);
	if (h->next == NULL)
		return (1);
	return (1 + print_list(h->next));
}
