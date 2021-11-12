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
	list_t *new = NULL;
	list_t *temp = NULL;

	temp = *head;
	new = malloc(sizeof(list_t));
	if (str == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(new->str);
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

/**
 * _strlen - cuenta los char de str
 * @s: toma la posición de str
 * Return: la cuenta
 */

int _strlen(char *s)
{
int count = 0;
while (*(s + count))
count++;
return (count);
}
