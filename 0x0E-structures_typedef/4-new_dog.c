#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * new_dog - Create a new dog
 * @name: first statment
 * @age: second statment
 * @owner: third statment
 * Return: Null if fail, string if success.
 *
 * _strlen - calculate the lenght of the string.
 * @s: string
 * Return: the lenght
 *
 * _strcpy - make a copy of the string
 * @dest: Destiny of the string
 * @src: surce of the string
 * Return: dest
 */

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
int m = 0;
int count = 0;

while (src[count])
{
count++;
}

for (; m <= count; m++)
{
dest[m] = src[m];
}
return (dest);
}


dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;

d = malloc(sizeof(dog_t));
if (d == NULL)
return(NULL);

else
{
d->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (d->name == NULL)
{
free(d);
return (NULL);
}

d->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (d->owner == NULL)
{
free(d->name);
free(d);
return(NULL);
}

d->name = _strcpy(d->name, name);
d->owner = _strcpy(d->owner, owner);
d->age = age;
}
return (d);
}
