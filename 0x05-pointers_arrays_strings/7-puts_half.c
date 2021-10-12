#include "main.h"

/**
 * puts_half - imprimir la mitad de los caracteres
 * @str: copia del string
 * Return: void
 */

void puts_half(char *str)
{
int c = 0;
int p;
int c2;

while (*(str + c))
{
c++;
}

if (c % 2 != 0)
{
c2 = (c + 1) / 2;
}
else
{
c2 = c / 2;
}
for (p = c2; p <= c - 1; p++)
{
_putchar(str[p]);
}
_putchar('\n');
}
