#include "main.h"

/**
 * _strcat - Concatenar dos strings.
 * @dest: destino del string.
 * @src: fuente del string.
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
int m;
int n;

for (m = 0; dest[m] != '\0'; m++)
{
continue;
}
for (n = 0; src[n] != '\0'; m++, n++)
{
dest[m] = src[n];
}
return (dest);
}
