#include "main.h"
/**
 * _strspn - Calcular el syze de accept
 * @s: String a revisar
 * @accept: Caracteres para comparar
 * Return: size de accept
 */

unsigned int _strspn(char *s, char *accept)
{
int pos_accept = 0;
unsigned int bytes = 0;

while (*s)
{
while (accept[pos_accept])
{
if (*s == accept[pos_accept] && accept[pos_accept != '\0'])
{
bytes++;
break;
}
pos_accept++;
}
s++;
}
return (bytes);
}
