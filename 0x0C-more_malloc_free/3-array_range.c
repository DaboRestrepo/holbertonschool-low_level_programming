#include <stdlib.h>
#include "main.h"
/**
 * array_range - alocar memoria para array de ints.
 * @min: rango mínimo.
 * @max: rango máximo.
 * Return: Null si falla. Null si max < min.
 * ptr si es exitoso.
 */

int *array_range(int min, int max)
{
int *ptr, i;
if (min > max)
{
return (NULL);
}
ptr = malloc((sizeof(int) * (max - min)) + sizeof(int));
if (ptr == NULL)
{
return (NULL);
}

for (i = 0; min <= max; i++)
{
ptr[i] = min;
min++;
}

return (ptr);
}
