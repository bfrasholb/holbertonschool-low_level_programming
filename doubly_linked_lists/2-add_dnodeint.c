#include "lists.h"

/**
 * add_dnodeint- adds a new header node to a linked list
 * @head: a linked list
 * @n: an integer
 * Return: the address of the new element, or NULL on failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;

	*head = new;
	return (new);
}
