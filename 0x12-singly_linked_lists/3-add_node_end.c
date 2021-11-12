#include "lists.h"
#include <string.h>

int _strlen(char *s);

/**
 * add_node_end - Add a node to the end.
 * @head: pointer to the node.
 * @str: pointer to string
 * Return: the new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *temp = NULL;

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(new->str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}

/**
 * _strlen - cuenta los char de str
 * @s: toma la posición de str
 * Return: la cuenta
 */

int _strlen(char *s)
{
int count = 0;
if (s)
	return (0);
while (*(s + count))
count++;
return (count);
}
