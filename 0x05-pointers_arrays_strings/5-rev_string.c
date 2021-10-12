#include "main.h"
/**
 * rev_string - revertir el str y guardarlo
 * @s: copia de str
 * Return: void.
 */

void rev_string(char *s)
{
int count = 0;
char temp[10];
int l = 0, f;

while (*(s + count))
{
count++;
}
for (f = count - 1; f >= 0; f--, l++)
{
temp[l] = s[f];
}

for (f = 0; f < count; f++)
{
s[f] = temp[f];
}
}
