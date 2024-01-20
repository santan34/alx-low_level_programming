#include "lists.h"
/**
 * pop_listint - pops a node out
 * @head: linked list address
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = NULL;
	int value = 0;

	if (*head == NULL)
		return (0);
	value = (*head)->n;
	tmp = *head;
	*head = tmp->next;
	free(tmp);
	return (value);
}
