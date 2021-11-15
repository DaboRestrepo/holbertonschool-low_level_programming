#include "lists.h"
/**
 * listint_len - Print  the size of a list of integers.
 * @h: The list of elements.
 * Return: the count of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
