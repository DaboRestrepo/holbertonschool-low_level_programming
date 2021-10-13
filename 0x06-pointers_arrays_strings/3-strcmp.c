#include "main.h"

/**
 * _strcmp - Comparar 2 string
 * @s1: string 1
 * @s2: string 2
 * Return: 15: mayor, -15: menor, 0: igual
 */

int _strcmp(char *s1, char *s2)
{
int cs1;
int cs2;

for (cs1 = 0; s1[cs1] != '\0'; cs1++)
{
continue;
}
for (cs2 = 0; s2[cs2] != '\0'; cs2++)
{
continue;
}
if (cs1 == cs2)
{
return (0);
}
else if (cs1 < cs2)
{
return (-15);
}
else
{
return (15);
}
}
