#include "main.h"

/**
 * _strncat - concatenar con valor n.
 * @dest: puntero destino.
 * @src: puntero fuente.
 * @n: bytes de fuente que se usan.
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
int m = 0;
int o;

while (dest[m])
{
m++;
}


for (o = 0; o < n && src[o] != '\0'; o++)
{
dest[m + o] = src[o];
}
dest[m + o] = '\0';
return (dest);
}
