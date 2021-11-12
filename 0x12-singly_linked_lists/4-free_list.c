#include "lists.h"
/**
 * free_list - Free the memory of the list
 * @head: The list.
 */
void free_list(list_t *head)
{
	list_t *temp, *temp2;

	temp = head;
	while (temp)
	{
		temp2 = temp->next;
		free(temp->str);
		free(temp);
		temp = temp2;
	}
}
