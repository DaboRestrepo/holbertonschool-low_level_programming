#include "main.h"
/**
 * _strncpy - copiar el string con type n
 * @dest: destino del string
 * @src: fuente del string
 * @n: size que se da del string
 * Return: destino.
 */

char *_strncpy(char *dest, char *src, int n)
{
int m;

for (m = 0; m < n && src[m] != '\0'; m++)
{
dest[m] = src[m];
}
for (; m < n; m++)
{
dest[m] = '\0';
}
return (dest);
}
