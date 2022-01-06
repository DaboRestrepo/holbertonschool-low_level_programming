#include "lists.h"
/**
 * insert_dnodeint_at_index - Insert a node in an index.
 * @h: the head.
 * @idx: the giving index.
 * @n: the number.
 * Return: the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *head = *h;
	unsigned int i = 0;

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	if (h == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = head;
		*h = new;
		return (new);
	}
	for (; i < idx - 1; i++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	new->next = head->next;
	new->prev = head;
	head->next->prev = new;
	head->next = new;
	return (new);
}
