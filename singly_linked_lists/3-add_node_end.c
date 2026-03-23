#include "lists.h"
#include <string.h>

/**
 * add_node_end-adds a node to the end of an existing list
 * @head:a pointer to a list
 * @str:a string to be duplicated
 * Return:the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new = malloc(sizeof(list_t));
	int i = 0;

	if (new == NULL)
		return (NULL);

	if (str[i] != '\0')
	{
		while (str[i] != '\0')
			i++;
	}
	new->str = strdup(str);
	new->len = i;
	new->next = *head;

	while (*head != NULL)
	{
		*head = (*head)->next;
	}

	*head = new;
	return (new);
}
