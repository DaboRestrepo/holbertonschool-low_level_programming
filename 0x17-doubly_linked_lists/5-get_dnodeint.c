#include "lists.h"
/**
 * get_dnodeint_at_index - get the node in the index.
 * @head: head of the list.
 * @index: giving index.
 * Return: the list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	for (; i < index; i++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
