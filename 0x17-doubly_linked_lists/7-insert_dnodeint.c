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
	dlistint_t *new = NULL, *head = NULL;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));
	i = 1;
	head = *h;
	for (; head != NULL; i++)
	{
		if (i == idx)
		{
			if (head->next == NULL)
				new = add_dnodeint_end(h, n);
			else
			{
				new = malloc(sizeof(dlistint_t));
				if (new != NULL)
				{
					new->n = n;
					new->next = head->next;
					new->prev = head;
					head->next->prev = new;
					head->next = new;
				}
			}
		}
		head = head->next;
	}
	return (new);
}
