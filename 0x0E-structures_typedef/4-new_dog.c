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

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;

d = malloc(sizeof(dog_t));

if (d)
{
d->name = malloc(sizeof(char) * _strlen(name));
if (d->name)
{
d->owner = malloc(sizeof(char) * _strlen(owner));
_strcpy(d->name, name);
_strcpy(d->owner, owner);
d->age = age;
return (d);
}
else
{
free (d->name);
free (d);
}
}

return (d);
}

int _strlen(char *s)
{
int count = 0;

while (s[count])
{
count++;
}
return (count);
}

char *_strcpy(char *dest, char *src)
{
int index;

for (index = 0; src[index]; index++)
{
dest[index] = src[index];
}
return (dest);
}

