#include "lists.h"
/**
 * free_list - free a singly linked list
 * @Return: void
 */
void free_list(list_t *head)
{
	list_t *del = NULL;

	while (head != NULL )
	{
		del = head->next;
		free(head->str);
		free(head);
		head = del;
	}
}
