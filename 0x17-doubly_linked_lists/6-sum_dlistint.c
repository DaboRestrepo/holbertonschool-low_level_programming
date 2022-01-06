#include "lists.h"
/**
 * @brief 
 * 
 */
int sum_dlistint(dlistint_t *head)
{
    unsigned int sum = 0;

    if (head == NULL)
        return (0);
    while (head)
    {
        sum += head->n;
        head = head->next;
    }
    return (sum);
}