#include "main.h"

/**
 * puts2 - imprimir la mitad de los #.
 * @str: string que se da.
 * Return: void
 */

void puts2(char *str)
{
int c = 0;
int p;

while (*(str + c))
{
c++;
}
for (p = 0; p <= c - 1; p++)
{
if (p % 2 == 0)
{
_putchar (str[p]);
}
}
_putchar ('\n');
}
