#include "lists.h"
/**
 * pop_listint - Free the memory of the head.
 * @head: The list.
 * Return: The element that was erased.
 */

int pop_listint(listint_t **head)
{
	int n = (*head)->n;
	listint_t *temp = NULL;

	if (head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (n);
}
