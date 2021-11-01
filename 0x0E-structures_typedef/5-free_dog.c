#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * free_dog - Free the space
 * @d: pointer to the address
 * Return: Void
 */

void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
