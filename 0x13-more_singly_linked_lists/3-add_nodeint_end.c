#include "lists.h"
/**
 * add_nodeint_end - add a new node at the end
 * @head: The list of elements.
 * @n: integer.
 * Return: the address of the new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL;
	listint_t *temp = NULL;

	temp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (&*new);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (&*new);
}
