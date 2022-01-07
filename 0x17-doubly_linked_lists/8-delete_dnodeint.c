#include "lists.h"
/**
 * delete_dnodeint_at_index - Delete the index's node.
 * @head: the head of the list.
 * @index: the index.
 * Return: 1 in success and -1 in failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *h = *head, *tmp;

	if (head != NULL && *head != NULL)
	{
		if (index == 0)
		{
			*head = h->next;
			h->prev = NULL;
			free(h);
			return (1);
		}
		i = 1;
		for (; h != NULL; i++)
		{
			if (i == index)
			{
				/*if (h->next == NULL)
					return (-1);*/
				tmp = h->next;
				h->next = tmp->next;
				free(tmp);
			}
			h = h->next;
		}
		return (1);
	}
	return (-1);
}
