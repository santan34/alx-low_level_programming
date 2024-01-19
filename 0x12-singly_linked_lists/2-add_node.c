#include "lists.h"
#include <string.h>
/**
 * add_node - add a node to a struct
 * @head: a pointer to a pointer to a struct
 * @str: a string to be added to a node
 * Return: a pointer to a struct
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;
	char *string = NULL;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	string = strdup(str);
	if (string == NULL)
		free(new);
		return (NULL);
	new->str = string;
	new->len = strlen(string);
	new->next = *head;
	*head = new;
	return (*head);

}
