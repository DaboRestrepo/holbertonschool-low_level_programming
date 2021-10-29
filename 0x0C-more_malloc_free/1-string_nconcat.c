#include <stdlib.h>
#include "main.h"

/**
 * _strlen - cuenta los char de str
 * @s: toma la posición de str
 * Return: la cuenta
 */

unsigned int _strlen(char *s)
{
unsigned int count = 0;
while (*(s + count))
count++;
return (count);
}

/**
 * string_nconcat - concatenar con n
 * @s1: Destino
 * @s2: fuente
 * @n: tamaño
 * Return: ptr.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *string;
unsigned int m, o;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
string = malloc(sizeof(char) * ((_strlen(s1) + n) + 1));
if (string == NULL)
{
return (NULL);
}
for (m = 0; s1[m] != '\0'; m++)
{
string[m] = s1[m];
}
if (n >= _strlen(s2))
{
for (o = 0; s2[o] != '\0'; o++)
{
string[m] = s2[o];
m++;
}
}
else
{
for (o = 0; o < n; o++)
{
string[m] = s2[o];
m++;
}
}
string[m] = '\0';
return (string);
}
