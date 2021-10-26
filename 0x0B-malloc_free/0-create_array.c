#include <stdlib.h>
/**
 * create_array - Create an array of chars.
 * @size: Bytes the type.
 * @c: Char to recive.
 * Return: Pointer to array.
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;

char *ptr =  malloc(sizeof(char) * size);
if (ptr == NULL || size == 0)
{
return (NULL);
}
i = 0;
while (i < size)
{
ptr[i] = c;
i++;
}
return (ptr);
}
