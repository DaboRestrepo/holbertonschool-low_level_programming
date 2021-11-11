#include "lists.h"
#include <string.h>
/**
 * add_node - add a new node to the list.
 * @head: pointer to the node.
 * @str: string.
 * Return: the new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;
	list_t *temp = NULL;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}

	temp = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
