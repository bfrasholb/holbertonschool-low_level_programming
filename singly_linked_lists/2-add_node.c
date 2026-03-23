#include "lists.h"
#include <string.h>

/**
 * add_node-adds a node to an existing list
 * @head:a pointer to a list
 * @str:a string to be duplicated
 * Return:the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
