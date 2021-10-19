#include "main.h"
/**
 * _strchr - Imprimir el string desde c
 * @s: Puntero del string
 * @c: Referencia.
 * Return: s.
 */


char *_strchr(char *s, char c)
{
int pos = 0;

for (pos = 0; s[pos]; pos++)
{
if (s[pos] == c)
{
return (s + pos);
break;
}
}
return ('\0');
}
