#include "lists.h"
/**
 * reverse_listint - Reverse the list.
 * @head: The list.
 * Return: a pointer to the firts node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *current;

	if (head == NULL)
		return (NULL);

	prev = *head;
	*head = (*head)->next;
	current = *head;
	prev->next = NULL;

	while (*head != NULL)
	{
		*head = (*head)->next;
		current->next = prev;
		prev = current;
		current = *head;
	}
	*head = prev;
	return (*head);
}
