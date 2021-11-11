#include "lists.h"
/**
 * list_len - Give the number of elements in the list.
 * @h: The elements of the list.
 * Return: the count.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
