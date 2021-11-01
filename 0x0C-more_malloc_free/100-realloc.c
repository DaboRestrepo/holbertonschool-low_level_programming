#include <stdlib.h>
#include "main.h"
/**
 * _strlen - Contador de caracteres.
 * @c: String.
 * Return: La dimensión del string.
 */

unsigned int _strlen(char *c)
{
unsigned int i = 0;

for (; c[i]; i++)
{
continue;
}
return (i);
}

/**
 *
 *
 *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int i = 0;

for (; ptr[old_size]; i++)

ptr = malloc(new_size);


return (ptr);
}

