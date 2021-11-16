#include "lists.h"
/**
 * insert_nodeint_at_index - Put a node in the element in the index position.
 * @head: The list.
 * @idx: Integer that pass for the list.
 * @n: data of the node.
 * Return: The address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head,
unsigned int idx, int n)
{
	listint_t *new = new = malloc(sizeof(listint_t)), *h = *head;
	unsigned int i;

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = h;
		*head = new;
		return (new);
	}
	if (h == NULL)
		return (NULL);
	for (i = 0; i < idx - 1; i++)
	{
		if (h->next == NULL)
			return (NULL);
		h = h->next;
	}
	new->next = h->next;
	h->next = new;
	return (new);
}
