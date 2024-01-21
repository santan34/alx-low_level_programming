#include "lists.h"
/**
 * sum_dlistint - gives a sum of all the ns
 * @head: the pointer to the first mode
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
