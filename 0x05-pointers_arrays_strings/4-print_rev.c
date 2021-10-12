#include "main.h"

/**
 * print_rev - check the code
 * @s: copia el string
 * Return: el caracter en la posición.
 */

void print_rev(char *s)
{
int count = 0;
char temp[1024];
while (*(s + count))
{
count++;
}
for (pos = count - 1; pos >= 0 ; pos--)
{
_putchar(s[pos]);
}
_putchar ('\n');
}
