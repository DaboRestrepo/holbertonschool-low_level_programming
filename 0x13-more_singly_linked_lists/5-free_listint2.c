#include "lists.h"
/**
 * free_listint2 - Free the memory of the list and
 * let head equal to NULL.
 * @head: The list.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = NULL, *temp2 = NULL;

	if (head == NULL)
		return;
	temp = *head;
	while (temp != NULL)
	{
		temp2 = temp;
		temp = temp->next;
		free(temp2);
	}
	*head = NULL;
}
