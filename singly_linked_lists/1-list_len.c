#include "lists.h"

/**
 * list_len-returns the length of a list
 * @h:a list
 * Return:number of elements of the list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
