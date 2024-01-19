#include "lists.h"
/**
 * add_node_end - ands a node at the end of list
 * @head: pointer to the current node
 * @str: the string to add
 * Return: pointer tothe dtruct
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL;
	char *string = NULL;
	list_t *n = NULL;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	string = strdup(str);
	if (string == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = string;
	new->len = strlen(string);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	n = *head;
	while (n->next != NULL)
	{
		n = n->next;
	}
	n->next = new;
	return (n);
}
