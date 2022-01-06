#include "lists.h"
/**
 * free_dlistint - free the double list.
 * @head: Head of the list.
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
