#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at that index
 * @head: a pointer to the first node
 * @index: the node to remove
 * Return: the int stored in that node
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	dlistint_t *forw;
	dlistint_t *back;
	unsigned int count = 0;

	temp = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		if (*head == NULL)
			return (1);
		(*head)->prev = NULL;
		return (1);
	}
	while (count != index)
	{
		count += 1;
		temp = temp->next;
	}
	if (count == index)
	{
		forw = temp->next;
		back = temp->prev;
		back->next = temp->next;
		if (forw != NULL)
			forw->prev = temp->prev;
		free(temp);
		return (1);
	}
	return (-1);
}
