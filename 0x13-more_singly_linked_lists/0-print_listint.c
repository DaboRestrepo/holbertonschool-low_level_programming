#include "lists.h"
/**
 * print_listint - Print a list of integers.
 * @h: The list of elements.
 * Return: the count of elements.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->n == '\0')
			printf("(nil)");
		else
			printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}