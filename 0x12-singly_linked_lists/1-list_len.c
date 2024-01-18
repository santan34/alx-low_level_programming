#include "lists.h"
/**
 * list_len - gives the len of a list
 * @h: the node
 * Return: the len of the struct
 */
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);
	if (h->next == NULL)
		return (1);
	return (1 + list_len(h->next));
}
