#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - this function initialize a variable
 * of type struct dog
 * @d: pointer to the giving address
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}