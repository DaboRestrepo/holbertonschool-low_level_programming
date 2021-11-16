#include "lists.h"
/**
 * get_nodeint_at_index - Get the element in the index position.
 * @head: The list.
 * @index: Integer that pass for the list.
 * Return: The element in the index position.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
	{
		return (0);
	}
	for (i = 0; head->next != NULL; i++)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
	}
	return (head);
}
