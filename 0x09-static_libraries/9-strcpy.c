#include "main.h"
/**
 * _strcpy - copiar el contenido de una array.
 * @dest: Destino de contenido
 * @src: fuente del contenido
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
int m = 0;
int count = 0;

while (src[count] != '\0')
{
count++;
}
for (; m <= count; m++)
{
dest[m] = src[m];
}
return (dest);
}
