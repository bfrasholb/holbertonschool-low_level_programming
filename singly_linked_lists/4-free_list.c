#include "lists.h"

/**
 * free_list-frees each element of/and each node of a list
 * @head:a list
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
