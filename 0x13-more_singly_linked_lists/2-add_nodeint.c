#include "lists.h"
/**
 * add_nodeint - add a new node.
 * @head: The list of elements.
 * @n: integer.
 * Return: the address of the new node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;

	return (&*new);
}
