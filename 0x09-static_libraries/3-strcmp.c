#include "main.h"

/**
 * _strcmp - Comparar 2 string
 * @s1: string 1
 * @s2: string 2
 * Return: 15: mayor, -15: menor, 0: igual
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
