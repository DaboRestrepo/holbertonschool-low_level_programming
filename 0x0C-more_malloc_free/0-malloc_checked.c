#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Alocar espacio en la memoria.
 * @b: Data.
 * Return: un puntero vacío.
 */

void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);

if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
