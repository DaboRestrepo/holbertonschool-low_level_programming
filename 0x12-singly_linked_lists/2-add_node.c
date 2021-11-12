#include "lists.h"
#include <string.h>

int _strlen(char *s);
/**
 * add_node - add a new node to the list.
 * @head: pointer to the node.
 * @str: string.
 * Return: the new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(strdup(str));
	new->next = *head;
	*head = new;
	return (new);
}

/**
 * _strlen - count the lenght.
 * @s: string.
 * Return: count.
 */
int _strlen(char *s)
{
int count = 0;
while (*(s + count))
count++;
return (count);
}
