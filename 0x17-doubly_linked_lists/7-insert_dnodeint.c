#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at index
 * @h: the head of the struct
 * @idx: the index to insert at
 * Return: a dlistint_t
 */
 dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new =NULL;
	dlistint_t *tmp =NULL;
	unsigned int count = 0;

	new = malloc(sizeof(dlistint_t));
	tmp = *h;
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (idx == 0 && tmp == NULL)
	{
		*h = new;
		return (new);
	}
	while ((count != idx) && (tmp->next != NULL))
	{
		count += 1;
		tmp = tmp->next;
	}
	if (count == idx)
	{
		new->next = tmp;
		new->prev = tmp->prev;
		tmp->prev->next = new;
		tmp->prev = new;
	}
	else
		return (NULL);
	return (new);
}
