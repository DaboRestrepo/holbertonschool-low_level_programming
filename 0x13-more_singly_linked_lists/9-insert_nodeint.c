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
	listint_t *new = NULL, *h = NULL;
	unsigned int i = 1;

	h = *head;
	new = malloc(sizeof(listint_t));
		if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 1)
	{
		new->next = h;
		h = new;
		return (&*new);
	}

	for (; h->next != NULL && i < idx - 1; i++)
	{
		h = h->next;
	}
	new->next = h->next;
	h->next = new;
	return (&*new);
}
