#include "lists.h"
/**
 * sum_dlistint - Add the elements in the list.
 * @head: the head of the list.
 * Return: the add.
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
