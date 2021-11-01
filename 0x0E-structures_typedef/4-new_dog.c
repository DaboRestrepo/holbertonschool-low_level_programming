#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * new_dog - Create a new dog
 * @name: first statment
 * @age: second statment
 * @owner: third statment
 *
 * Return: Null if fail and d if success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;

d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);

d->name = name;
d->age = age;
d->owner = owner;

return (d);
}
