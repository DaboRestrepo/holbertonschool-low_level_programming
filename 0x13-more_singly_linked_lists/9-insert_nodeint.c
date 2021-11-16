#include "lists.h"
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t /**temp = NULL,*/ *new = NULL, *h = NULL;
    unsigned int i = 0;

    h = *head;

    for (; h->next != NULL; i++)            /* search the correct place */
    {
        if (i == idx)
        {
            new = malloc(sizeof(listint_t)); /* Get the new node */
            if (new == NULL)
                return (NULL);
            new->n = n;
            new->next = h->next;
            h->next = new;
        }
        else
            return (NULL);
    }
    return (&*new);
}