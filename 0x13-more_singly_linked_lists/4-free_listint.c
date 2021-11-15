#include "lists.h"
/**
 * free_listint - free the memory of a linked list.
 * @head: The list of elements.
 * Return: nothing.
 */

void free_listint(listint_t *head)
{
	listint_t *temp = NULL;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
