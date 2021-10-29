#include <stdlib.h>
#include "main.h"
/**
 * _calloc - Alocar memoria para cualquier array.
 * @nmemb: Tamaño del type.
 * @size: Cantidad de type.
 * Return: Null si algún argumento es = 0.
 * Null si _calloc falla y ptr si es exitoso.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i;

if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(nmemb * size);

if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < nmemb * size; i++)
{
ptr[i] = 0;
}
return (ptr);
}
