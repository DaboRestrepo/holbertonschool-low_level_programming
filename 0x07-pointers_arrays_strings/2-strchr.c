#include "main.h"
#include <stddef.h>

/**
 * _strchr - Imprimir el string desde c
 * @s: Puntero del string
 * @c: Referencia.
 * Return: s.
 */



char *_strchr(char *s, char c)
{
int pos = 0;
int count = 0;

while (s[count] != '\0')
{
count++;
}
count++;

for (pos = 0; pos <= count; pos++)
{
if (s[pos] == c)
{
return (s + pos);
}
}
return (NULL);
}
