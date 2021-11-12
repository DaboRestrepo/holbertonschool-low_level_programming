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
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
