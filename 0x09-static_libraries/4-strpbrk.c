#include "main.h"

/**
 * _strpbrk - Coincidencia con cualquier caracter de accept.
 * @s: String a revisar.
 * @accept: string de referencia.
 * Return: s + pos si match, nulo si no.
 */

char *_strpbrk(char *s, char *accept)
{
int pos;
int pos_a;
for (pos = 0; s[pos]; pos++)
{
for (pos_a = 0; accept[pos_a]; pos_a++)
{
if (s[pos] == accept[pos_a])
{
return (s + pos);
break;
}
}
}
return ('\0');
}
